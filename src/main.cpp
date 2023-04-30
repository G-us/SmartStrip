
#define DECODE_NEC          // Includes Apple and Onkyo


#include <Arduino.h>

#include "PinDefinitionsAndMore.h" // Define macros for input and output pin etc.
#include "IRCommands.h" // Include all IR commands
#include <IRremote.hpp>

String input;
char SelectedCommand;

void setup() {
    Serial.begin(115200);
    // Just to know which program is running on my Arduino
    Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing library version " VERSION_IRREMOTE));
    IrSender.begin(ENABLE_LED_FEEDBACK);
}

void loop() {
  if (Serial.available()){
    input = Serial.readStringUntil('\n');
    Serial.println(input);
    SelectedCommand = input;
    IrSender.sendNEC(IRAddress, SelectedCommand, 0);
}
}