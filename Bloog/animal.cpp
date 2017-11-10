#include "animal.h"
#include <iostream>

#include <string>

Animal::Animal(){}

Animal::Animal(int numLegs,char* species) : numLegs(numLegs), species(species){}

void Animal::Display(){
    std::cout << "NumLegs " + std::to_string(numLegs) << std::endl;
    std::cout << "Species ";
    std::cout << species << std::endl;
    std::cout << "Name ";
    std::cout << name << std::endl;
}


void Animal::changeName(char* newName){
    this->name = newName;
}
