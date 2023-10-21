#ifndef BOOK_HPP
#define BOOK_HPP

#include "Item.hpp"
using namespace std;

class Book: public Item {
    public:
    Book(string pName, float pOrgName, bool pIsImported);
    bool getIsTaxExempted();
};

#endif
