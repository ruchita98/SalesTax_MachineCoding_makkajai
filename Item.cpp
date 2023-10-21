#include "Item.hpp"
#include <iostream>
using namespace std;


Item::Item(string pName, float pOrgName, bool pIsImported)
{
    name = pName;
    originalPrice = pOrgName;
    isImported = pIsImported;
    isTaxExempted = false;
}

string Item::getName() {
    return name;
}

float Item::getOriginalPrice()
{
    return originalPrice;
}

bool Item::getIsImported() {
    return isImported;
}
    
bool Item::getIsTaxExempted() {
    return isTaxExempted;
}
