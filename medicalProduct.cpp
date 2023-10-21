#include "medicalProduct.hpp"
using namespace std;


MedicalProduct::MedicalProduct(string pName, float pOrgName, bool pIsImported) : Item(pName, pOrgName, pIsImported){
}

bool MedicalProduct::getIsTaxExempted() {
    return true;
}
