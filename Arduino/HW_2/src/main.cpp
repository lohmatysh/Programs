#include <Arduino.h>
#define photoresistor A0

float average(int num);

//Переменные
const int NUMS = 30;    //Кол-во значений для среднего 
int val = 0;            //Значение с фоторезистора
int val_f = 0;          //Отфильтрованное значение

void setup() {
  //Настройка СОМ порта
  Serial.begin(9600);
}

void loop() {
 //Получаем и масштабируем данные с потенциометра
 val = analogRead(photoresistor);
 val_f = average(val);
 val_f = map(val_f, 150, 850, 0, 10);
 val_f = constrain(val_f, 0, 10);
 Serial.println(val_f);
}

//Функция "Среднее арифметическое"
float average(int num) {
  long sum = 0;
  float result = 0.0;
  for (int i = 0; i < NUMS; i++) {
    sum += num;
  }
  result = ((float)sum/NUMS);
  return(result);
}