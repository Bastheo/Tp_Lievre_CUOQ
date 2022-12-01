#include "animal.h"

Animal::Animal()
{

}

Animal::~Animal()
{

}

void Animal::init()
{
    ptrUI->setFrameRect(QRect(
                                  0,
                                  ptrUI->frameRect().y(),
                                  ptrUI->frameRect().width(),
                                  ptrUI->frameRect().height()
                                  )
                            );
}

int Animal::get_position()
{

}

void Animal::avancer()
{
    ptrUI->setFrameRect(QRect(
                                  ptrUI->frameRect().x(),
                                  ptrUI->frameRect().y(),
                                  ptrUI->frameRect().width(),
                                  ptrUI->frameRect().height()
                                  )
                            );
}

Tortue::Tortue(QLabel *label)
{
    ptrUI = label;
}

Tortue::~Tortue()
{

}

void Tortue::avancer()
{
    ptrUI->setFrameRect(QRect(
                                  ptrUI->frameRect().x() + vitesse,
                                  ptrUI->frameRect().y(),
                                  ptrUI->frameRect().width(),
                                  ptrUI->frameRect().height()
                                  )
                            );
}

int Tortue::get_position()
{

}

Lievre::Lievre(QLabel *label)
{
    ptrUI = label;
}

Lievre::~Lievre()
{

}

void Lievre::avancer()
{
    ptrUI->setFrameRect(QRect(
                                  ptrUI->frameRect().x() + vitesse,
                                  ptrUI->frameRect().y(),
                                  ptrUI->frameRect().width(),
                                  ptrUI->frameRect().height()
                                  )
                            );
}

int Lievre::get_position()
{

}
