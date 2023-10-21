#include <iostream>
#include "TaxCalculator.hpp"
#include "book.hpp"
#include "food.hpp"
#include "medicalProduct.hpp"

using namespace std;

TaxCalculator* TaxCalculator::taxcalulatorInstance = nullptr;
mutex TaxCalculator::mtx;

TaxCalculator::TaxCalculator() {

}

TaxCalculator* TaxCalculator::getInstance()
{
   if(taxcalulatorInstance == nullptr)
   {
        mtx.lock();

        if(taxcalulatorInstance == nullptr)
        {
            taxcalulatorInstance = new TaxCalculator();
        }
        mtx.unlock();
   }

   return taxcalulatorInstance;
}

float TaxCalculator::calculateItemTax(Item* item)
{
    float basicSalesTax = item -> getIsTaxExempted() ? 0 : (float)(item -> getOriginalPrice() * (salesTaxRate))/ 100.0;
    float importTax = item -> getIsImported() ? (float)(item -> getOriginalPrice() * (importTaxRate))/ 100.0 : 0;
    return basicSalesTax + importTax;
}

void TaxCalculator::setSalesTaxRate(float rate)
{
    salesTaxRate = rate;
}

void TaxCalculator::setImportTaxRate(float rate) {
    importTaxRate = rate;
}