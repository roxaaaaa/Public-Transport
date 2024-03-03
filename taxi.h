#pragma once
#include "mainclass.h"
class Taxi: public Transport{
private:
    unsigned int price;
public:
    Taxi(string num = 0, int agel = 0,unsigned int pric=0): Transport(num,4,agel),price(pric){}
    void setPrice(unsigned int pric){
        price=pric;
    }
    unsigned int getPrice() const{ return price;}
};
