#include "ThingSpeak.h"
#include "WiFiEsp.h"

// Enter the Wi-Fi network SSID (name) 
char ssid[] = "*******";  

// Enter the Wi-Fi network password
char pass[] = "********";   
WiFiEspClient  client;

// Emulating Serial1/ESP8266 on pins 2/3 as hardware serial not present
#ifndef HAVE_HWSERIAL1
#include "SoftwareSerial.h"
SoftwareSerial ESP8266(2, 3); // RX, TX
#define ESP_BAUDRATE  19200
#else
#define ESP_BAUDRATE  115200
#endif

// Smart Home channel details

// Enter Channel ID of ThingSpeak server here
unsigned long smartHomeChannelNumber = *******; 

// Open ThingSpeak > Channel > API keys > Read API keys > Copy paste the entire key
const char * channelReadAPIKey = "*************"; 

// Enter the Field number which you want to control (Eg : Field 1)
unsigned int relayStatusFieldNumber = 1; 

int relaypin = 7;

void setup() {
 //Initialize serial and wait for port to open
  Serial.begin(9600);  
  
  // initialize serial for ESP module  
  setEspBaudRate(ESP_BAUDRATE);

  while (!Serial) {
    ; // wait for serial port to connect. 
  }

  Serial.print("Searching for ESP8266..."); 
  // initialize ESP8266 Wi-Fi module
  WiFi.init(&ESP8266);

   // Initialize ThingSpeak
  ThingSpeak.begin(client);  

  pinMode(relaypin,OUTPUT);  //connected to S terminal of relay
}

void loop() {

  int statusCode = 0;
  
  // Connect or reconnect to WiFi
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass); // Connect to WPA/WPA2 network.
      Serial.print(".");
      delay(2000);     
    } 
    Serial.println("\nConnected");
  }
  // Reading field 1(relaystatus) of the channel 
  int relaystatus = ThingSpeak.readLongField(smartHomeChannelNumber, relayStatusFieldNumber, channelReadAPIKey); 
  Serial.println("Relaystatus is: " + String(relaystatus));

   // Check the status of the read operation to see if it was successful
   // relaystatus no is set as 13 to turn on Relay & 3 to turn off Relay, this can be adjusted depending upon the user
  statusCode = ThingSpeak.getLastReadStatus();
  if(statusCode == 200){
    Serial.println(relaystatus);
    if(relaystatus==13){
      digitalWrite(relaypin,HIGH);  //turn relay on
    }
    else if(relaystatus==3)
    {
      digitalWrite(relaypin,LOW);  //turn relay off
    }
  }
  else{
    Serial.println("Problem reading channel. HTTP error code " + String(statusCode)); 
  }
  
  delay(200); 
  
}

// This function attempts to set the ESP8266 baudrate.
void setEspBaudRate(unsigned long baudrate){
  long rates[6] = {115200,74880,57600,38400,19200,9600};

  Serial.print("Setting ESP8266 baudrate to ");
  Serial.print(baudrate);
  Serial.println("...");

  for(int i = 0; i < 6; i++){
    ESP8266.begin(rates[i]);
    delay(100);
    ESP8266.print("AT+UART_DEF=");
    ESP8266.print(baudrate);
    ESP8266.print(",8,1,0,0\r\n");
    delay(100);  
  }
    
  ESP8266.begin(baudrate);
}
