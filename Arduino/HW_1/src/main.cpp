#include <Arduino.h>
#define button_pin 3    //кнопка 
#define led_pin 6       //светодиод

boolean button = 0;
boolean button_flag = 0;
boolean led_flag = 0;

unsigned int last_press = 0;

void setup() {
  //Входы
  pinMode(button_pin, INPUT_PULLUP);

  //Выходы
  pinMode(led_pin, OUTPUT);

  //Настройка СОМ порта
  Serial.begin(9600);
}

void loop() {
  button = !digitalRead(button_pin);
  
  //Переключение светодиода по кнопке
  if ((button == 1) && (button_flag == 0) && (millis() - last_press > 250)) {
    button_flag == 1;
    Serial.println("Кнопка нажата");
    led_flag = !led_flag;
    digitalWrite(led_pin, led_flag);
    last_press = millis();
  }
  if ((button == 0) && (button_flag == 1)){
    button_flag == 0;
    Serial.println("Кнопка отпущена");
  }
}