#ifndef TAXCALCULATOR_HPP
#define TAXCALCULATOR_HPP

/**
 * SingleTon pattern
*/
#include "Item.hpp"
#include <mutex>
using namespace std;

class TaxCalculator {
    private:
    TaxCalculator();
    float salesTaxRate;
    float importTaxRate;
    static TaxCalculator* taxcalulatorInstance;
    static mutex mtx;

    public:
    static TaxCalculator* getInstance();
    float calculateItemTax(Item* item);
    void setSalesTaxRate(float rate);
    void setImportTaxRate(float rate);

};

#endif
