#include <QCoreApplication>
#include <builderconcrete.h>
#include <iostream>

void ps(const char* a){
    std::cout << a << std::endl;
}

int main(int argc, char *argv[])
{
    ps("Creating Builder");
    BuilderConcrete* myBuilder = new BuilderConcrete();
    ps("Default builder construct display :");
    Animal* testAnimal = myBuilder->BuildPart();
    testAnimal->Display();

    ps("Leg specified:");
    myBuilder->SetLegNum(3);
    Animal* testAnimal2 = myBuilder->BuildPart();
    testAnimal2->Display();

    ps("Name chosen:");
    myBuilder->SetName("Fluffy doggo!");
    Animal* testAnimal3 = myBuilder->BuildPart();
    testAnimal3->Display();

    ps("Done!");

    QCoreApplication a(argc, argv);

    return a.exec();
}
