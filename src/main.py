import serial

ser = serial.Serial('/dev/ttyACM0', 115200)
print("Connected to: " + ser.portstr)
ser.write(b'OnOff#')

ser.close()