// task1
#include <iostream>
using namespace std;

int main()
{
    double priceOfLcd = 350.0;
    double priceOfMobile = 750.0;
    double priceOfDesktop = 2500.0;
    int quantityOfLcd, quantityOfMobile, quantityOfDesktop;
    double finalTotal = 0;

    cout << "Enter the quantity of LCD you want to buy (each is $350): ";
    cin >> quantityOfLcd;
    cout << "Enter the quantity of Mobile you want to buy (each is $750): ";
    cin >> quantityOfMobile;
    cout << "Enter the quantity of Desktop you want to buy (each is $2500): ";
    cin >> quantityOfDesktop;

    double total = (priceOfLcd * quantityOfLcd) + (priceOfMobile * quantityOfMobile) + (priceOfDesktop * quantityOfDesktop);
    cout << "Total Price: $" << total << endl;

    return 0;
}
