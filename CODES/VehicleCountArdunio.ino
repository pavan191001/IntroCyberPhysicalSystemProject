const byte interruptPin1 = 2;// FOr NODEMCU D2
const byte interruptPin2 = 3;// FOr NODEMCU D3
int count1 = 0;
int count2 = 0;
int countTot = 0;
int totamt = 0;
void setup() {
 Serial.begin(9600);
 pinMode(interruptPin1, INPUT_PULLUP);
 pinMode(interruptPin2, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(interruptPin1), ir1, RISING);
 attachInterrupt(digitalPinToInterrupt(interruptPin2), ir2, RISING);

}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.print("Vehicle Count1: ");
 Serial.println(count1);
 delay(1000);
 Serial.print("Vehicle Count2: ");
 Serial.println(count2);
 delay(1000);
 countTot = count1+count2;
 Serial.println(countTot);
 totamt = countTot*25;
 Serial.println(totamt);
 
}
void ir1() {
  count1++;  
  delay(1);
}

void ir2() {
  count2++;  
  delay(1);
}
