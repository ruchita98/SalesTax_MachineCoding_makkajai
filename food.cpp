#include "food.hpp"
using namespace std;


Food::Food(string pName, float pOrgName, bool pIsImported) : Item(pName, pOrgName, pIsImported){
}

bool Food::getIsTaxExempted() {
    return true;
}
