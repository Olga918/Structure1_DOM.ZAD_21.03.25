#include "entity.h"

using namespace std;

void fillEntity(Entity& entity) {
    int typeInput;
    cout << "Enter type (0 - Bird, 1 - livestock, 2 - Human): "; 
    cin >> typeInput; 
    entity.type = static_cast<EntityType>(typeInput);

    cout << "Enter speed: ";
    cin >> entity.speed;
    cout << "Enter color: ";
    cin >> entity.color;

    if (entity.type == Bird) {
        cout << "Find the flight speed: ";
        cin >> entity.characteristic.flightSpeed;
    }
    else if (entity.type == Cattle) {
        int isCloven;
        cout << "Artiodactyl? (1 - Yes, 0 - No): ";
        cin >> isCloven;
        entity.characteristic.isClovenHoofed = isCloven;
    }
    else if (entity.type == Human) {
        cout << "Enter level IQ: ";
        cin >> entity.characteristic.iq;
    }

}

void printEntity(const Entity& entity) {
    cout << "Type: ";
    switch (entity.type) {
    case Bird: 
        cout << "Bird"; 
        break;
    case Cattle: 
        cout << "livestock";
        break;
    case Human: 
        cout << "Human";
        break;
    }
    cout << ", speed: " << entity.speed << ", Color: " << entity.color << ", Characteristic: ";

    if (entity.type == Bird)
    {
        cout << entity.characteristic.flightSpeed;
    }
    else if (entity.type == Cattle)
    {
        cout << (entity.characteristic.isClovenHoofed ? "Yes" : "No");
    }
    else {
        cout << entity.characteristic.iq;
    }
    cout << std::endl;
}

void editEntity(Entity & entity)
{
    fillEntity(entity);
}

void printAllEntities(Entity entities[], int size)
{
    for (int i = 0; i < size; ++i) 
    {
        printEntity(entities[i]);
    } 
}





