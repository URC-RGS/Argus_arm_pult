
const bool DEBUG = true;

// пины опроса штатных кнопок
const uint16_t PIN_BUT0 = 10;
const uint16_t PIN_BUT1 = 11;
const uint16_t PIN_BUT2 = 12;
const uint16_t PIN_BUT3 = 13;
const uint16_t PIN_BUT4 = 14;
const uint16_t PIN_BUT5 = 15;
const uint16_t PIN_BUT6 = 18;
const uint16_t PIN_BUT7 = 19;
const uint16_t PIN_BUT8 = 20;
const uint16_t PIN_BUT9 = 21;
const uint16_t PIN_BUT10 = 22;
const uint16_t PIN_BUT11 = 26;

// пины для управления мосфет транзисторами 
const uint16_t PIN_OUT0 = 0;
const uint16_t PIN_OUT1 = 1;
const uint16_t PIN_OUT2 = 2;
const uint16_t PIN_OUT3 = 3;
const uint16_t PIN_OUT4 = 4;
const uint16_t PIN_OUT5 = 5;
const uint16_t PIN_OUT6 = 6;
const uint16_t PIN_OUT7 = 7;
const uint16_t PIN_OUT8 = 8;
const uint16_t PIN_OUT9 = 9;

// пины для UART
const uint16_t UART_RX = 17;
const uint16_t UART_TX = 16;

// пин для кнопки переключателя режимов и индикаторного светодиода
const uint16_t LED = 27;
const uint16_t MODE = 28;

// массивы значений 
int ButtonStateInput[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


