#include <Arduino.h>
#include <Config.h>


void setup() {

  Serial.begin(9600);
  

  pinMode(PIN_BUT0, INPUT);
  pinMode(PIN_BUT1, INPUT);
  pinMode(PIN_BUT2, INPUT);
  pinMode(PIN_BUT3, INPUT);
  pinMode(PIN_BUT4, INPUT);
  pinMode(PIN_BUT5, INPUT);
  pinMode(PIN_BUT6, INPUT);
  pinMode(PIN_BUT7, INPUT);
  pinMode(PIN_BUT8, INPUT);
  pinMode(PIN_BUT9, INPUT);
  pinMode(PIN_BUT10, INPUT);
  pinMode(PIN_BUT11, INPUT);

  pinMode(MODE, INPUT);
  pinMode(LED, OUTPUT);

  pinMode(PIN_OUT0, OUTPUT);
  pinMode(PIN_OUT1, OUTPUT);
  pinMode(PIN_OUT2, OUTPUT);
  pinMode(PIN_OUT3, OUTPUT);
  pinMode(PIN_OUT4, OUTPUT);
  pinMode(PIN_OUT5, OUTPUT);
  pinMode(PIN_OUT6, OUTPUT);
  pinMode(PIN_OUT7, OUTPUT);
  pinMode(PIN_OUT8, OUTPUT);
  pinMode(PIN_OUT9, OUTPUT);
  
}

void loop() {

  ButtonState[0] = char(digitalRead(PIN_BUT0));
  ButtonState[1] = char(digitalRead(PIN_BUT1));
  ButtonState[2] = char(digitalRead(PIN_BUT2));
  ButtonState[3] = char(digitalRead(PIN_BUT3));
  ButtonState[4] = char(digitalRead(PIN_BUT4));
  ButtonState[5] = char(digitalRead(PIN_BUT5));
  ButtonState[6] = char(digitalRead(PIN_BUT6));
  ButtonState[7] = char(digitalRead(PIN_BUT7));
  ButtonState[8] = char(digitalRead(PIN_BUT8));
  ButtonState[9] = char(digitalRead(PIN_BUT9));

  for (int i = 0; i < 10; i++) {
    OutData += ButtonState[i];
    if (i == 9) {
      OutData += ";";
    }
    else {
      OutData += " ";
    }
    
  }

  Serial.println(OutData);
  OutData = "$";
  delay(20);

}