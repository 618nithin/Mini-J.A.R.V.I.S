# Mini-J.A.R.V.I.S


## Code
- #### [Mini J.A.R.V.I.S code for Arduino](https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Code_Mini_J.A.R.V.I.S.ino)

## Introduction
* Inspired by Tony Stark's J.A.R.V.I.S. in the Iron Man series, the project is intended to facilitate home automation using Arduino
* Programmed an Arduino Uno R3 board coupled with the ESP8266 Wifi Module and interfaced it with the google voice assistant on an android device via IoT analytics platform "ThingSpeak" and integrated the entire set-up through IFTTT applets.
* The system allows the users to turn any electrical appliance on/off through voice or text commands

## Components required
* Arduino UNO (or Mega, Pro, Mini)
* ESP8266 Wi-Fi Module
* 5V Relay module
* 230v bulb along with holder
* Connecting wires
* Android device (Wi-Fi enabled)

## Component Description
<img align="right" width="200" height="140"   src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/Arduino-Uno-R3.jpg"> 

   - **Arduino UNO**  
   Arduino Uno is a microcontroller board based on the ATmega328P. It has 14 digital input/output
   pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0),
   a USB connection, a power jack, an ICSP header and a reset button. The open-source Arduino Software (IDE) makes 
   it easy to write code and upload it to the Arduino Uno board. It runs on Windows, Mac OS X, and Linux. 
   
 
   - **ESP8266 Wi-Fi Module**  
    <img align="left" width="200" height="144.444"   src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/ESP8266-Pinout.png">
    The ESP8266 WiFi Module is a self contained SOC with integrated TCP/IP protocol stack that can give any microcontroller
    access to your WiFi network. The ESP8266 is capable of either hosting an application or offloading all WiFi networking 
    functions from another application processor. Each ESP8266 module comes pre-programmed with an AT command set firmware, meaning, 
    we can simply hook this up to the Arduino device and get about as much WiFi-ability as a WiFi Shield offers.  The ESP8266 module is
    an extremely cost effective board with a huge, and ever growing, community. 

   - **5V Relay Module**  
      <img align="right" width="200" height="140"   src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/1-Channel-5V-Relay-Module-for-Arduino-with-Optocoupler.jpg">
      5V Relay Module is a relay interface board, it can be controlled directly by a wide range of microcontrollers such as Arduino, AVR, PIC, ARM and so on. It uses a low         level triggered control signal (3.3-5VDC) to control the relay. Triggering the relay operates the normally open or normally closed contacts. It is frequently used in         an automatic control circuit. To put it simply, it is an automatic switch to control a high-current circuit with a low-current signal.  
## Circuit Diagram
<img src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/Mini%20J.A.R.V.I.S%20Circuit%20diagram.jpg" width="800">
