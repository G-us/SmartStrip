
#define DECODE_NEC          // Includes Apple and Onkyo



#include <Arduino.h>

#include "PinDefinitionsAndMore.h" // Define macros for input and output pin etc.
#include "IRCommands.h" // Include all IR commands
#include <IRremote.hpp>

String input;
char SelectedCommand;

void SendIRCommand(String input){
  if (input == "OnOff"){
      IrSender.sendNEC(IRAddress, OnOff, 0);
      Serial.println("OnOff");
    }
    else if (input == "Skip"){
      IrSender.sendNEC(IRAddress, Skip, 0);
      Serial.println("Skip");
    }
    else if (input == "BrightnessDown"){
      IrSender.sendNEC(IRAddress, BrightnessDown, 0);
      Serial.println("BrightnessDown");
    }
    else if (input == "BrightnessUp"){
      IrSender.sendNEC(IRAddress, BrightnessUp, 0);
    }
    else if (input == "Red"){
      IrSender.sendNEC(IRAddress, Red, 0);
    }
    else if (input == "Green"){
      IrSender.sendNEC(IRAddress, Green, 0);
    }
    else if (input == "Blue"){
      IrSender.sendNEC(IRAddress, Blue, 0);
    }
    else if (input == "White"){
      IrSender.sendNEC(IRAddress, White, 0);
    }
    else if (input == "LighterRed"){
      IrSender.sendNEC(IRAddress, LighterRed, 0);
    }
    else if (input == "LighterGreen"){
      IrSender.sendNEC(IRAddress, LighterGreen, 0);
    }
    else if (input == "Magenta"){
      IrSender.sendNEC(IRAddress, Magenta, 0);
    }
    else if (input == "Pink"){
      IrSender.sendNEC(IRAddress, Pink, 0);
    }
    else if (input == "DarkerOrange"){
      IrSender.sendNEC(IRAddress, DarkerOrange, 0);
    }
    else if (input == "Turquoise"){
      IrSender.sendNEC(IRAddress, Turquoise, 0);
    }
    else if (input == "EggPlant"){
      IrSender.sendNEC(IRAddress, EggPlant, 0);
    }
    else if (input == "Fuchia"){
      IrSender.sendNEC(IRAddress, Fuchia, 0);
    }
    else if (input == "Orange"){
      IrSender.sendNEC(IRAddress, Orange, 0);
    }
    else if (input == "Azure"){
      IrSender.sendNEC(IRAddress, Azure, 0);
    }
    else if (input == "Indigo"){
      IrSender.sendNEC(IRAddress, Indigo, 0);
    }
    else if (input == "PaleBlue"){
      IrSender.sendNEC(IRAddress, PaleBlue, 0);
    }
    else if (input == "Yellow"){
      IrSender.sendNEC(IRAddress, Yellow, 0);
    }
    else if (input == "SkyBlue"){
      IrSender.sendNEC(IRAddress, SkyBlue, 0);
    }
    else if (input == "RedViolet"){
      IrSender.sendNEC(IRAddress, RedViolet, 0);
    }
    else if (input == "Cerulean"){
      IrSender.sendNEC(IRAddress, Cerulean, 0);
    }
    else if (input == "RedUp"){
      IrSender.sendNEC(IRAddress, RedUp, 0);
    }
    else if (input == "RedDown"){
      IrSender.sendNEC(IRAddress, RedDown, 0);
    }
    else if (input == "GreenUp"){
      IrSender.sendNEC(IRAddress, GreenUp, 0);
    }
    else if (input == "GreenDown"){
      IrSender.sendNEC(IRAddress, GreenDown, 0);
    }
    else if (input == "BlueUp"){
      IrSender.sendNEC(IRAddress, BlueUp, 0);
    }
    else if (input == "BlueDown"){
      IrSender.sendNEC(IRAddress, BlueDown, 0);
    }
    else if (input == "Quick")
    {
      IrSender.sendNEC(IRAddress, Quick, 0);
    }
    else if (input == "Slow")
    {
      IrSender.sendNEC(IRAddress, Slow, 0);
    }
    else if (input == "Fade3")
    {
      IrSender.sendNEC(IRAddress, Fade3, 0);
    }
    else if (input == "Fade7")
    {
      IrSender.sendNEC(IRAddress, Fade7, 0);
    }
    else if (input == "Flash")
    {
      IrSender.sendNEC(IRAddress, Flash, 0);
    }
    else if (input == "DIY1")
    {
      IrSender.sendNEC(IRAddress, DIY1, 0);
    }
    else if (input == "DIY2")
    {
      IrSender.sendNEC(IRAddress, DIY2, 0);
    }
    else if (input == "DIY3")
    {
      IrSender.sendNEC(IRAddress, DIY3, 0);
    }
    else if (input == "DIY4")
    {
      IrSender.sendNEC(IRAddress, DIY4, 0);
    }
    else if (input == "DIY5")
    {
      IrSender.sendNEC(IRAddress, DIY5, 0);
    }
    else if (input == "DIY6")
    {
      IrSender.sendNEC(IRAddress, DIY6, 0);
    }
    else if (input == "Auto")
    {
      IrSender.sendNEC(IRAddress, Auto, 0);
    }
    else if (input == "Jump3"){
      IrSender.sendNEC(IRAddress, Jump3, 0);
    }
    else if (input == "Jump7"){
      IrSender.sendNEC(IRAddress, Jump7, 0);
    }
}

void setup() {
    Serial.begin(115200);
    // Just to know which program is running on my Arduino
    Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing library version " VERSION_IRREMOTE));
    IrSender.begin(ENABLE_LED_FEEDBACK);
}

void loop() {
    input = Serial.readStringUntil('\n');
    Serial.println(input);
    SendIRCommand(input);
}