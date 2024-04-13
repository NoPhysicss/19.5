#include <iostream>

class Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Why???";
    }
};

class Cat : public Animal
{
    void Voice() override
    {
        std::cout << "Cat: Meau :3";
    }
};

class Dog : public Animal
{
    void Voice() override
    {
        std::cout << "Dog: Wooof !!!";
    }
};

class Owl : public Animal
{
    void Voice() override
    {
        std::cout << "Owl: Uuuu~Uuuu...";
    }
};

int main() 
{
    Animal** p = new Animal*[3];

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            p[i] = new Cat;
        }
        else if (i == 1)
        {
            p[i] = new Dog;
        }
        else
        {
            p[i] = new Owl;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        p[i]->Voice();
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete p[i];
    }

    delete[] p;

}
