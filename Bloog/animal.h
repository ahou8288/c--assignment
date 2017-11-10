#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
public:
    Animal();
    Animal(int numLegs,char* species);

    void Display();
    void changeName(char* newName);
private:
    const int numLegs = 9;
    const char* species = "9 legged default animal";
    char* name;
};

#endif // ANIMAL_H
