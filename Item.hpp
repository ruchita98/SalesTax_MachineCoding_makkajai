#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;

class Item {
    protected:
    string name;
    float originalPrice;
    bool isImported;
    bool isTaxExempted;

    public:

    Item(string pName, float pOrgName, bool pIsImported);

    string getName();

    float getOriginalPrice();

    bool getIsImported();

    bool getIsTaxExempted();

};

#endif