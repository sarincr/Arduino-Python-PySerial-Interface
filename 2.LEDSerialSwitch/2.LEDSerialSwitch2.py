import serial 
import time  
arduino = serial.Serial('com4',9600)  
time.sleep(1)

while 1:
    var = raw_input() 
    if (var == '1'):
        arduino.write('1') 
        time.sleep(1)
    if (var == '0'): 
        arduino.write('0')
        time.sleep(1)