// task5 COMPLETE PROGRAM
#include <iostream>
using namespace std;

int main()
{
    double priceOfLcd = 350.0;
    double priceOfMobile = 750.0;
    double priceOfDesktop = 2500.0;
    int quantityOfLcd, quantityOfMobile, quantityOfDesktop;

    cout << "Enter the quantity of LCD you want to buy (each is $350): ";
    cin >> quantityOfLcd;
    cout << "Enter the quantity of Mobile you want to buy (each is $750): ";
    cin >> quantityOfMobile;
    cout << "Enter the quantity of Desktop you want to buy (each is $2500): ";
    cin >> quantityOfDesktop;

    double total = (priceOfLcd * quantityOfLcd) + (priceOfMobile * quantityOfMobile) + (priceOfDesktop * quantityOfDesktop);
    double finalTotal = (total > 3600) ? total * 0.9 : total;
    double shipping = (finalTotal <= 2000) ? 15.0 : 0.0;
    double totalWithShipping = finalTotal + shipping;
    int loyaltyPoints = (totalWithShipping > 2000) ? 50 : 20;

    cout << "Total after discount and shipping: $" << totalWithShipping << " " << finalTotal << endl;
    cout << "Loyalty points earned: " << loyaltyPoints << endl;

    return 0;
}
