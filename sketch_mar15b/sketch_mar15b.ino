#include <Keypad.h>

const byte ROWS = 5; 
const byte COLS = 5; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A', 'I'},
  {'4', '5', '6', 'B', 'J'},
  {'7', '8', '9', 'C', 'K'},
  {'E', 'F', 'G', 'H', 'L'},
  {'*', '0'}
};

byte rowPins[ROWS] = {A3, A2, A1, A0, 15}; 
byte colPins[COLS] = {8, 9, 10, 16, 14}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);//Grid pin
  pinMode(9, INPUT_PULLUP);//Grid pin
  pinMode(10, INPUT_PULLUP);//Grid pin
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);//Grid pin
  pinMode(15, INPUT_PULLUP);//Grid pin
  pinMode(16, INPUT_PULLUP);//Grid pin
  pinMode(A0, INPUT_PULLUP);//Grid pin
  pinMode(A1, INPUT_PULLUP);//Grid pin
  pinMode(A2, INPUT_PULLUP);//Grid pin
  pinMode(A3, INPUT_PULLUP);//Grid pin
  Serial.begin(9600);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
    delay(30);
  }
}
