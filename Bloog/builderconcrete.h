#ifndef BUILDERCONCRETE_H
#define BUILDERCONCRETE_H
#include "buildervirtual.h"

class BuilderConcrete: public BuilderVirtual
{
public:
    BuilderConcrete();
    Animal* BuildPart();

    void SetLegNum(int numLegs);
    void SetSpecies(char* species);
    void SetName(char* name);
private:
    int numLegs = 0;
    char* species = "";
    char* name = "";
};

#endif // BUILDERCONCRETE_H
