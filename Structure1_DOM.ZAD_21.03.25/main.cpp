#include "car.h" 
#include "entity.h"




int main() {
   /* Car cars[10]; 
    for (int i = 0; i < 10; ++i) { 
        fillCar(cars[i]);
    } 
    printAllCars(cars, 10);*/

    Entity entities[10];
    for (int i = 0; i < 10; ++i) {
        fillEntity(entities[i]);
    }
    printAllEntities(entities, 10);

    return 0;

}