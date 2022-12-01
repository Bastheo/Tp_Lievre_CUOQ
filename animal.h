#ifndef ANIMAL_H
#define ANIMAL_H
#include <QLabel>

class Animal
{
protected:
    QLabel *ptrUI;
    int position;

public:
    Animal();
    virtual ~Animal();
    virtual void init();
    virtual int get_position();
    virtual void avancer();
};

class Tortue: public Animal
{
private:
    int vitesse = 10;

public:
    Tortue(QLabel *label);
    ~Tortue();
    void avancer();
    int get_position();
};

class Lievre: public Animal
{
private:
    int vitesse = 8;

public:
    Lievre(QLabel *label);
    ~Lievre();
    void avancer();
    int get_position();
};

#endif // ANIMAL_H

