
// пины опроса штатных кнопок
const uint16_t PIN_BUT0 = 0;
const uint16_t PIN_BUT1 = 1;
const uint16_t PIN_BUT2 = 2;
const uint16_t PIN_BUT3 = 3;
const uint16_t PIN_BUT4 = 4;
const uint16_t PIN_BUT5 = 5;
const uint16_t PIN_BUT6 = 6;
const uint16_t PIN_BUT7 = 7;
const uint16_t PIN_BUT8 = 8;
const uint16_t PIN_BUT9 = 9;

// пины для управления мосфет транзисторами 
const uint16_t PIN_OUT0 = 10;
const uint16_t PIN_OUT1 = 11;
const uint16_t PIN_OUT2 = 12;
const uint16_t PIN_OUT3 = 13;
const uint16_t PIN_OUT4 = 14;
const uint16_t PIN_OUT5 = 15;
const uint16_t PIN_OUT6 = 18;
const uint16_t PIN_OUT7 = 19;
const uint16_t PIN_OUT8 = 20;
const uint16_t PIN_OUT9 = 21;

// пины для UART
const uint16_t UART_RX = 16;
const uint16_t UART_TX = 17;

// пин для кнопки переключателя режимов и индикаторного светодиода
const uint16_t LED = 22;
const uint16_t MODE = 26;


int ButtonState[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
String OutData = "$";
