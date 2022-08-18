#include "ThingSpeak.h"
#include <ESP8266WiFi.h>
int x=0,y=0;
char ssid[] = "SAI GUNAKAR"; 
char pass[] = "saiteja1319"; 
unsigned long Channel_ID = 1381160;
const char * WriteAPIKey = "88FLA0ON822GZ8MK";
int countTot =0;
int count1=0,count2=0;
int totamt =0;
WiFiClient client;

void setup() {
 Serial.begin(115200);
 WiFi.mode(WIFI_STA);
 ThingSpeak.begin(client);
}

void loop() {
  ir1();
  ir2();
 countTot = count1+count2;
 totamt = countTot*25;
 Serial.println(totamt);
 internet();
 upload();
}

void ir1() {
  count1++;  
  delay(1);
}

void ir2() {
  count2++;  
  delay(1);
}
void internet()
{
if (WiFi.status() != WL_CONNECTED)
{
Serial.print("Attempting to connect to SSID: ");
Serial.println(ssid);
while (WiFi.status() != WL_CONNECTED)
{
WiFi.begin(ssid, pass);
Serial.print(".");
delay(5000);
}
Serial.println("\nConnected.");
}
}


void upload()
{
internet();
x = ThingSpeak.writeField(Channel_ID, 1, countTot, WriteAPIKey);
delay(500);
y = ThingSpeak.writeField(Channel_ID, 2, totamt, WriteAPIKey);
delay(500);
}
