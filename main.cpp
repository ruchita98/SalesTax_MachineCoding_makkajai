/***
 * write tests
*/

#include <iostream>
#include <iomanip>
#include "book.hpp"
#include "food.hpp"
#include "TaxCalculator.hpp"
#include "PurchaseManager.hpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << setprecision(3) << endl;
    Item* item1 = new Book("book", 12.49, false);
    Item* item2 = new Item("music CD", 14.99, false);
    Item* item3 = new Food("chocolate bar", 0.85, false);

    TaxCalculator* taxCalculator = TaxCalculator::getInstance();

    PurchaseManager* purchaseManager = new PurchaseManager(taxCalculator);
    purchaseManager -> addItem(item1);
    purchaseManager -> addItem(item2);
    purchaseManager -> addItem(item3);
    purchaseManager -> printPurchaseDetails();

    return 0;
}