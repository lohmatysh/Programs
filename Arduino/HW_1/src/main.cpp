#include <Arduino.h>
#define button_pin 4
#define led_pin 13

//Переменные
boolean button;
boolean button_flag = 0;
boolean led_flag = 0;

void setup() {
  //Входы и выходы
  pinMode(button_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);

  //Настройка СОМ порта
  Serial.begin(9600);
}
void loop() {
  button = !digitalRead(button_pin);
  if ((button == 1) && (button_flag == 0)) {
    button_flag = 1;
    Serial.println("pressed");
    led_flag = !led_flag;
    digitalWrite(led_pin, led_flag);
  }
  if ((button == 0) && (button_flag == 1)) {
    button_flag = 0;
    Serial.println("released");
  }
}