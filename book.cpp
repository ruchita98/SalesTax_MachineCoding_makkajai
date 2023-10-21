#include "book.hpp"
using namespace std;


Book::Book(string pName, float pOrgName, bool pIsImported) : Item(pName, pOrgName, pIsImported){
}

bool Book::getIsTaxExempted() {
    return true;
}
