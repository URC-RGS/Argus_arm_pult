
const bool DEBUG = true;

// установка задержки между опросами джойстика 
const uint16_t TIMEOUT = 10;

// пины опроса кнопок
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
const uint16_t PIN_BUT10 = 10;
const uint16_t PIN_BUT11 = 11;

// пины для UART
const uint16_t UART_RX = 17;
const uint16_t UART_TX = 16;

// массивы значений 
int ButtonState[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

String OutData = "";

