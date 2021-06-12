# Mini-J.A.R.V.I.S


## CODE
- #### [Mini J.A.R.V.I.S code for Arduino](https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Code_Mini_J.A.R.V.I.S.ino)

## INTRODUCTION
* Inspired by Tony Stark's J.A.R.V.I.S. in the Iron Man series, the project is intended to facilitate home automation using Arduino
* Programmed an Arduino Uno R3 board coupled with the ESP8266 Wifi Module and interfaced it with the google voice assistant on an android device via IoT analytics platform "ThingSpeak" and integrated the entire set-up through IFTTT applets.
* The system allows the users to turn any electrical appliance on/off through voice or text commands

## ABSTRACT
Home automation system achieved great popularity in the last decades as it increases the comfort and quality of life. Smartphone applications are used to control and monitor the home appliances using different types of communication techniques. As mobile devices continue to grow in popularity and functionality, the demand for advanced ubiquitous mobile applications in our daily lives also increases. The project deals with the design and implementation of a flexible and low-cost Home Automation System for an android device to provide essential functionalities to our homes and associated control operations. In particular, with the help of an android device, one can manage the operations on home appliances, such as turning ON/OFF a bulb, television or microwave or any other home appliances.

## COMPONENTS REQUIRED
* Arduino UNO (or Mega, Pro, Mini)
* ESP8266 Wi-Fi Module
* 5V Relay module
* 230V bulb along with holder
* Connecting wires
* Android device (Wi-Fi enabled)

## COMPONENT DESCRIPTION 
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
## CIRCUIT DIAGRAM
<img src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/Mini%20J.A.R.V.I.S%20Circuit%20diagram.jpg" width="800">  

## THINGSPEAK PLATFORM
ThingSpeak is an IoT analytics platform service that allows you to aggregate, visualize, and analyze live data streams in the cloud. You can send data to ThingSpeak™ from your devices, create instant visualizations of live data, and send alerts using web services like Twitter® and Twilio®. ThingSpeak enables engineers and scientists to prototype and build IoT systems without setting up servers or developing web software.

## UPLOADING THE CODE TO THE ARDUINO
- Create a new channel in the thingSpeak platform as shown in the figure below
- Enter the Channel ID and Read API Keys of the new channel in the [given code](https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Code_Mini_J.A.R.V.I.S.ino) 
- Enter the Wi-Fi Network SSID(name) and Wi-Fi network password in the code
- Connect the Arduino Uno R3 through the USB port on the computer, open the Arduino IDE and upload the code.
<img src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/ThingSpeak%20server.jpg" width="800">  

## IFTTT PLATFORM
IFTTT derives its name from the programming conditional statement “if this, then that.” It is a software platform that connects apps, devices and services from different developers in order to trigger one or more automations involving those apps, devices and services. The automations are accomplished via applets which connect multiple apps to run automated tasks. Applet can be turned on/off using IFTTT’s website or mobile apps . We can also create our own applets or make variations of existing ones via IFTTT’s user-friendly, straightforward interface. 
 
-Setup the applets which invokes a webrequest to the ThingSpeak server through WebHooks whenever a particular phrase(Eg : Turning on/off the light) is conveyed through the  google voice assistant  

- #### Creating IFTTT Applet to turn on the light 

<p float="left">
  <img src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/Applet%201%20Part%201.jpg" width="255" height="374" />
  <img src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/Applet%201%20Part%202.0.jpg" width="255" height="374" /> 
</p>

- #### Creating IFTTT Applet to turn off the light
<p float="left">
  <img src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/Applet%202%20Part%201.jpg" width="255" height="374"/>
  <img src="https://github.com/618nithin/Mini-J.A.R.V.I.S/blob/main/Images/Applet%202%20Part%202.0.jpg" width="255" height="374"/> 
</p>

## CONTROLLING THE BULB FROM AN ANDROID DEVICE 
Now that we have setup the hardware and software successfully, the next step is to control the entire setup from an android device. In order to do that, download IFTTT app from playstore and login into your account. Just say  “Ok Google, Turn on the light” from anywhere in the world, this should result in the light bulb glowing.

## EMPIRICAL RESULTS
The project was completed and is working as described in this paper. The system allows the users to control appliances in their home from an android device through the home Wi-Fi network. The project turned out to be a very flexible and low cost solution for the basic switching control needs of a home automation system. The interface design is completely user friendly.
      The device works fairly good in terms of security as well. Since, the device works under the home Wi-Fi network, it automatically adheres to all the security configurations implemented on the home Wi-Fi network. IFTTT uses standard web-encryption methods to securely transfer data between the device and its servers. Access to the private data of the user and apps of ThingSpeak platform is protected by API keys that the user may reset at any time. So only the authorized device can be used to control the appliances. 

## CONCLUSION AND FUTURE WORK 
In this project, an architecture for low cost and flexible home automation system using Arduino is proposed and implemented. The home appliances are controlled by smartphones. Such a design transforms a mobile phone into a portable remote controller for home automation. It is noted that the proposed system is not restricted to home automation, it can be applied directly to remotely control any industrial device. Using this system as framework, the system can be expanded to include various other options which could include home security feature. Home automation systems can connect motion detectors, surveillance cameras, automated door locks, and other tangible security measures throughout your home so you can activate them from one mobile device before heading to bed. You can also choose to receive security alerts on your various devices depending on the time of day an alert goes off, and monitor activities in real-time whether you’re in the house or halfway around the globe.
 




