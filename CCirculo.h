//
// Created by MARIA HILDA BERMEJO RIOS on 10/28/19.
//

#ifndef PACMAN_CCIRCULO_H
#define PACMAN_CCIRCULO_H


#include "Udefiniciones.h"

class CCirculo {
private:
    sf::RenderWindow *palCanvas= nullptr;
    tnumeroReal  radio;
    tnumeroReal  posX;
    tnumeroReal  posY;
    tnumeroReal  desX;
    tnumeroReal  desY;
    sf::Color    color;
public:
    CCirculo( sf::RenderWindow *_palCanvas,tnumeroReal _radio, tnumeroReal _posX, tnumeroReal _posY,
              tnumeroReal _desX, tnumeroReal _desY, sf::Color _color);
    virtual ~CCirculo(){};
    void Muestrate();
    void Muevete();
};


#endif //PACMAN_CCIRCULO_H
