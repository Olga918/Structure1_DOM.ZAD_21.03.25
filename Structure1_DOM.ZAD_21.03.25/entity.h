#pragma once

#include <iostream>
#include <cstring>

//Задание 2
//Разработать структуру «Живая сущность»(скорость передвижения, тип(птица, скот, человек), цвет, характеристика(для птицы – скорость полета, вещественное число, для скота – парнокопытное, логическая переменная, для человека – уровень IQ, целая переменная).
//
//	Рекомендации: характеристику реализовать как объединение, тип реализовать как перечислимый тип данных.
//
//	Создать экземпляр структуры «Живая сущность» и реализовать для него следующие функции :
//
//Ввод информации;
//Печать информации.
//Создать массив из 10 экземпляров структуры «Живая сущность» и реализовать для него следующие функции :
//
//Редактировать данные;
//Печать всего списка;
//Поиск по характеристике.

enum EntityType { Bird, Cattle, Human };

struct Entity {
	double speed;
	EntityType type; 
	char color[20];
	union { 
		double flightSpeed; 
		bool isClovenHoofed; 
		int iq; 
	}
	characteristic; 
};

void fillEntity(Entity& entity);
void printEntity(const Entity& entity);
void editEntity(Entity& entity); 
void printAllEntities(Entity entities[], int size);
