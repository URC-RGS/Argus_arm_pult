#include <Arduino.h>
#include <Config.h>


void setup() {
  // инициализация отладочного сериала 
  if (DEBUG) Serial.begin(115200);
  
  // инициализация сериала для отправки на основной пульт 
  Serial1.setRX(UART_RX);
  Serial1.setTX(UART_TX);
  Serial1.begin(57600);

  // обьявление пинов для опроса стиков 
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
  
}

void loop() {
  
  // опрос кнопок и сбор их в массив для отправки нулевой индекс необходит для корректной работы парсера на основном пульте 
  ButtonState[1] = char(1 - digitalRead(PIN_BUT0));
  ButtonState[2] = char(1 - digitalRead(PIN_BUT1));
  ButtonState[3] = char(1 - digitalRead(PIN_BUT2));
  ButtonState[4] = char(1 - digitalRead(PIN_BUT3));
  ButtonState[5] = char(1 - digitalRead(PIN_BUT4));
  ButtonState[6] = char(1 - digitalRead(PIN_BUT5));
  ButtonState[7] = char(1 - digitalRead(PIN_BUT6));
  ButtonState[8] = char(1 - digitalRead(PIN_BUT7));
  ButtonState[9] = char(1 - digitalRead(PIN_BUT8));
  ButtonState[10] = char(1 - digitalRead(PIN_BUT9));
  ButtonState[11] = char(1 - digitalRead(PIN_BUT10));
  ButtonState[12] = char(1 - digitalRead(PIN_BUT11));

  // формируем пакет для отправки 
  for (int i = 0; i < 12; i++) {
    OutData += ButtonState[i];
    if (i == 11) {
      OutData += ";";
    }
    else {
      OutData += " ";
    }
    
  }

  // отправка строки 
  Serial1.println(OutData);

  // отладочный вывод отправляемой строки 
  if (DEBUG) Serial.println(OutData);

  OutData = "";
  delay(TIMEOUT);
                      
}