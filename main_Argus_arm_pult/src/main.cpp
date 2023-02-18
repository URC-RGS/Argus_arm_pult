#include <Arduino.h>
#include <GParser.h>
#include <AsyncStream.h>
#include <Config.h>

AsyncStream<50> serial1(&Serial1, ';');

void setup()
{
  // инициализация отлабочного сериала 
  if (DEBUG) Serial.begin(115200);

  // инициализация сериала для работы с внешним пультом 
  Serial1.setRX(UART_RX);
  Serial1.setTX(UART_TX);
  Serial1.begin(57600);

  // инициализация переключателя выбора режима и индикаторного светодиода 
  pinMode(MODE, INPUT_PULLDOWN);
  pinMode(LED, OUTPUT);
  
  // обьявление пинов для штатных кнопок 
  pinMode(PIN_BUT0, INPUT_PULLUP);
  pinMode(PIN_BUT1, INPUT_PULLUP);
  pinMode(PIN_BUT2, INPUT_PULLUP);
  pinMode(PIN_BUT3, INPUT_PULLUP);
  pinMode(PIN_BUT4, INPUT_PULLUP);
  pinMode(PIN_BUT5, INPUT_PULLUP);
  pinMode(PIN_BUT6, INPUT_PULLUP);
  pinMode(PIN_BUT7, INPUT_PULLUP);
  pinMode(PIN_BUT8, INPUT_PULLUP);
  pinMode(PIN_BUT9, INPUT_PULLUP);
  pinMode(PIN_BUT10, INPUT_PULLUP);
  pinMode(PIN_BUT11, INPUT_PULLUP);

  // обьявление пинов для мосфет транзисторов 
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

  if (digitalRead(MODE) == 1){

    // обработка нажатий штатных кнопок 
    if (DEBUG) Serial.println("Default");

    // вывод на транзисторы 
    digitalWrite(PIN_OUT0, digitalRead(PIN_BUT0));
    digitalWrite(PIN_OUT1, digitalRead(PIN_BUT1));
    digitalWrite(PIN_OUT2, digitalRead(PIN_BUT2));
    digitalWrite(PIN_OUT3, digitalRead(PIN_BUT3));
    digitalWrite(PIN_OUT4, digitalRead(PIN_BUT4));
    digitalWrite(PIN_OUT5, digitalRead(PIN_BUT5));
    digitalWrite(PIN_OUT6, digitalRead(PIN_BUT6));
    digitalWrite(PIN_OUT7, digitalRead(PIN_BUT7));
    digitalWrite(PIN_OUT8, digitalRead(PIN_BUT8));
    digitalWrite(PIN_OUT9, digitalRead(PIN_BUT9));

  } else {
    // обработка внешнего пульта 
     if (serial1.available()) {
        // парсинг принятых данных 
       GParser data = GParser(serial1.buf, ' ');
       int count = data.split();

      // отладка 
      if (DEBUG){
        Serial.println("###");
        for (byte i = 0; i < count; i++)
          Serial.println(data[i]);
      }

      // преобразование str to int
      int CountIN = data.parseInts(ButtonStateInput);

      // вывод на транзисторы 
      digitalWrite(PIN_OUT0, ButtonStateInput[0]);
      digitalWrite(PIN_OUT1, ButtonStateInput[1]);
      digitalWrite(PIN_OUT2, ButtonStateInput[2]);
      digitalWrite(PIN_OUT3, ButtonStateInput[3]);
      digitalWrite(PIN_OUT4, ButtonStateInput[4]);
      digitalWrite(PIN_OUT5, ButtonStateInput[5]);
      digitalWrite(PIN_OUT6, ButtonStateInput[6]);
      digitalWrite(PIN_OUT7, ButtonStateInput[7]);
      digitalWrite(PIN_OUT8, ButtonStateInput[8]);
      digitalWrite(PIN_OUT9, ButtonStateInput[9]);

     }
  }
}