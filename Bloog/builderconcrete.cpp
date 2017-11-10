#include "builderconcrete.h"

BuilderConcrete::BuilderConcrete()
{

}

Animal* BuilderConcrete::BuildPart(){
    Animal* newProduct = new Animal(numLegs,species);
    newProduct->changeName(name);
    return newProduct;
}

void BuilderConcrete::SetLegNum(int numLegs){
    this->numLegs = numLegs;
}

void BuilderConcrete::SetSpecies(char* species){
    this->species=species;
}

void BuilderConcrete::SetName(char* name){
    this->name=name;
}
