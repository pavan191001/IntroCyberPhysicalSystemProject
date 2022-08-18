int IRSensor1 = 5; // connect ir sensor to arduino pin 5
int IRSensor2 = 6; // connect ir sensor to arduino pin 6
int IRSensor3 = 7; // connect ir sensor to arduino pin 7
//int LED6 = 13; // conect Led to arduino pin 13
int LED5 = 12; // conect Led to arduino pin 12
int LED4 = 11; // conect Led to arduino pin 11
int LED3 = 10; // conect Led to arduino pin 10
int LED2 = 9; // conect Led to arduino pin 9
int LED1 = 8; // conect Led to arduino pin 8
int statusSensor1 = 0;
int statusSensor2 = 0;
int statusSensor3 = 0;

void setup() 
{


  Serial.begin(9600);
  pinMode (IRSensor1, INPUT); // sensor pin INPUT
  pinMode (IRSensor2, INPUT); // sensor pin INPUT
  pinMode (IRSensor3, INPUT); // sensor pin INPUT
  pinMode (LED1, OUTPUT); // Led pin OUTPUT
  pinMode (LED2, OUTPUT); // Led pin OUTPUT
  pinMode (LED3, OUTPUT); // Led pin OUTPUT
  pinMode (LED4, OUTPUT); // Led pin OUTPUT
  pinMode (LED5, OUTPUT); // Led pin OUTPUT
//  pinMode (LED6, OUTPUT); // Led pin OUTPUT
}

void loop()
{
  int statusSensor1 = digitalRead (IRSensor1);
  int statusSensor2 = digitalRead (IRSensor2);
  int statusSensor3 = digitalRead (IRSensor3);
  
  if (statusSensor1 == LOW){
    digitalWrite(LED1, HIGH); // LED HIGH
    digitalWrite(LED2, HIGH); // LED HIGH
    digitalWrite(LED3, HIGH); // LED HIGH
    Serial.print("ir sensor ");
    Serial.println("1");
    delay(1500);
  }
  else{

    digitalWrite(LED1, LOW); // LED LOW
    digitalWrite(LED2, LOW); // LED LOW
    digitalWrite(LED3, LOW); // LED LOW
    
  }
  
  if (statusSensor2 == LOW)
  {
    digitalWrite(LED2, HIGH); // LED HIGH
    digitalWrite(LED3, HIGH); // LED HIGH
    digitalWrite(LED4, HIGH); // LED HIGH
    Serial.print("ir sensor ");
    Serial.println("2");
    delay(1500);  
  }
    else{
  digitalWrite(LED2, LOW); // LED LOW
    digitalWrite(LED3, LOW); // LED LOW
    digitalWrite(LED4, LOW); // LED LOW
  }
   if (statusSensor3 == LOW)
  {
    digitalWrite(LED4, HIGH); // LED HIGH
    digitalWrite(LED5, HIGH); // LED HIGH
    digitalWrite(LED3, HIGH); // LED HIGH
    Serial.print("ir sensor ");
    Serial.println("3");
    delay(1500);
  }
  else{

    digitalWrite(LED4, LOW); // LED LOW
    digitalWrite(LED5, LOW); // LED LOW
    digitalWrite(LED3, LOW); // LED LOW
  }
  
}
