#include "data_type.h"
#include "data_tranceiver.h"
/*
void setup() {
  Serial.begin(9600);
}

void loop() {
   tranceive_ServoValue(888);
}
*/
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  tranceive_ServoValue(333);
}
/*
void setup() {
  Serial.begin(9600);
}

void loop()  {
  char receive_data[256] = "256";
  int receive_data_len;
  int i;

  receive_data_len = Serial.available();
  if (receive_data_len) {
    for (i = 0; i < receive_data_len; i++) {
      receive_data[i] = Serial.read();
    }
  }
  Serial.println(receive_data);
  delay(1000);
}
*/
/*
#define LED_PIN (13)
byte val;

void setup(){
  // Serial Setting
  Serial.begin(9600);

  // Port Setting
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop(){
  if(Serial.available() > 0){

    val = Serial.read();
    Serial.print(val);
    if(val == '1'){
      digitalWrite(LED_PIN, HIGH);
      delay(1000);
      digitalWrite(LED_PIN, LOW);
    }
  }
  delay(1000);
}
*/
