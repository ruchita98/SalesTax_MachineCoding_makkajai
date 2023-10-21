#ifndef MEDICAL_PRODUCT_HPP
#define MEDICAL_PRODUCT_HPP

#include "Item.hpp"
using namespace std;

class MedicalProduct: public Item {
    public:

    MedicalProduct(string pName, float pOrgName, bool pIsImported);

    bool getIsTaxExempted();
};

#endif