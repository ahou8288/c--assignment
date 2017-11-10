#ifndef BUILDERVIRTUAL_H
#define BUILDERVIRTUAL_H
#include "animal.h"

class BuilderVirtual
{
public:
    BuilderVirtual();
    virtual Animal* BuildPart() = 0;
};

#endif // BUILDERVIRTUAL_H
