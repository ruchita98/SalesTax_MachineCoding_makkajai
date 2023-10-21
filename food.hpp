#ifndef FOOD_HPP
#define FOOD_HPP

#include "Item.hpp"
using namespace std;

class Food: public Item {
    public:

    Food(string pName, float pOrgName, bool pIsImported);

    bool getIsTaxExempted();
};

#endif