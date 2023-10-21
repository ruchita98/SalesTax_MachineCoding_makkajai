#include <iostream>

#include "PurchaseManager.hpp"

using namespace std;


PurchaseManager::PurchaseManager(TaxCalculator* pTaxCalculator) {
    itemList = vector<Item*> ();
    taxCalculator = pTaxCalculator->getInstance();
}

void PurchaseManager::addItem(Item* item) {
    itemList.push_back(item);
}

void PurchaseManager::printPurchaseDetails() {
    float totalPrice = 0.0;
    float totalTax = 0.0;

    int itemPrice, itemTax;
    Item* i;
    for(int j = 0; j < itemList.size(); j++)
    {
        i = itemList[j];
        itemPrice = i -> getOriginalPrice();
        itemTax = taxCalculator->calculateItemTax(i);
        this->printItemPrice(i, itemPrice + itemTax);
        totalPrice += itemPrice;
        totalTax += itemTax;
    }

    cout << "Sales Taxes: " << totalTax << endl;
    cout << "Total: " << totalPrice << endl;
}

void PurchaseManager::printItemPrice(Item* item, float price)
{
    // 1 imported box of chocolates at 10.00
    string finalString = "1 ";
    finalString += (item -> getIsImported()) ? "imported " : "";
    finalString += (item -> getName() != "") ? item -> getName() + " " : "";
    finalString += ": ";
    finalString += to_string(price);
    cout << finalString << endl;
}

void PurchaseManager::startNewInstance() {
    itemList = vector<Item*> ();
}