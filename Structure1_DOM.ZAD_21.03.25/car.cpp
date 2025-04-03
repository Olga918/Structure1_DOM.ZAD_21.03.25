#include "car.h"
using namespace std;

void fillCar(Car& car) {
    cout << "Enter color: ";
    cin >> car.color; 
    cout << "Enter model: "; 
    cin >> car.model;

    cout << "Enter number (A number or word up to eight characters): ";
    char input[10];
    cin >> input;

    if (isdigit(input[0])) {
        car.id.number = atoi(input);
        car.isNumber = true;
    }
    else {
        strncpy_s(car.id.word, input, 8);
        car.id.word[8] = '\0';
        car.isNumber = false;
    }

}

void printCar(const Car& car) 
{
    cout << "Color: " << car.color << ", Model: " << car.model << ", Number: ";
    if (car.isNumber)
    {
        cout << car.id.number;
    }
    else
    {
        cout << car.id.word;
    } 
    cout << endl; }

void editCar(Car& car)
{
    fillCar(car); 
}

Car* findCar(Car cars[], int size, const char* search)
{
    for (int i = 0; i < size; ++i)
    {
        if ((!cars[i].isNumber && strcmp(cars[i].id.word, search) == 0) || (cars[i].isNumber && atoi(search) == cars[i].id.number))
        {
            return &cars[i];
        }
    }
    return nullptr;
}
void printAllCars(Car cars[], int size) {
    for (int i = 0; i < size; ++i) 
    { 
        printCar(cars[i]); 
    }
}
