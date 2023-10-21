#ifndef PURCHASE_MANAGER_HPP
#define PURCHASE_MANAGER_HPP

#include "Item.hpp"
#include "TaxCalculator.hpp"
using namespace std;

class PurchaseManager {
    private:
    vector<Item*> itemList;
    TaxCalculator* taxCalculator;
    void printItemPrice(Item* item, float price);

    public:
    PurchaseManager(TaxCalculator* taxCalculator);
    void addItem(Item* item);
    void printPurchaseDetails();
    void startNewInstance();
};

#endif