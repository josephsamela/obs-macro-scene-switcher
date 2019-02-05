/*
  KeyboardAndMouseControl

  Controls the mouse from five pushbuttons on an Arduino Leonardo, Micro or Due.
*/

#include "Keyboard.h"

// set pin numbers for the five buttons:
const int one   = 2;
const int two   = 3;
const int three = 4;
const int four  = 5;
const int five  = 6;

// define ctrl key (this is not cmd key on osx):
char ctrlKey = KEY_LEFT_CTRL;

void setup() { 
  // initialize the buttons' inputs:
  pinMode(one  , INPUT_PULLUP);
  pinMode(two  , INPUT_PULLUP);
  pinMode(three, INPUT_PULLUP);
  pinMode(four , INPUT_PULLUP);
  pinMode(five , INPUT_PULLUP);

  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // use the pushbuttons to control the keyboard:
  if (digitalRead(one) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press('1');
    Keyboard.releaseAll();
  }
  if (digitalRead(two) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press('2');
    Keyboard.releaseAll();
  }
    if (digitalRead(three) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press('3');
    Keyboard.releaseAll();
  }
    if (digitalRead(four) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press('4');
    Keyboard.releaseAll();
  }
    if (digitalRead(five) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press('5');
    Keyboard.releaseAll();
  }

  delay(100);
  
}
