#pragma once

#include <iostream> 
#include <cstring>

//
//Задание 1
//Реализовать структуру «Машина»(цвет, модель, номер).Номер машины может представлять из себя или пятизначный номер или слово до 8 символов.
//
//Рекомендации: номер реализовать как объединение.
//
//Создать экземпляр структуры «Машина» и реализовать для него следующие функции :
//
//Заполнение машины;
//Печать машины.
//Создать массив из 10 экземпляров структуры «Машина» и реализовать для него следующие функции :
//
//Редактировать машину;
//Печать всех машин;
//Поиск машины по номеру.



struct Car { 
	char color[20];
	char model[20]; 
union { 
	int number; 
    char word[9]; 
} id;
    bool isNumber; };

void fillCar(Car& car); 
void printCar(const Car& car);
void editCar(Car& car); 
Car* findCar(Car cars[],int size, const char* search); 
void printAllCars(Car cars[], int size);

