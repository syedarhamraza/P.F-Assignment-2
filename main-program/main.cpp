//ALL ADDITIONAL TASKS INCLUDED
#include <iostream>
#include <string>
using namespace std;

double paymentmethod(int payment_method, double total_with_shipping);
double customertype(double total_after_transactionfee, int customer_type);
double couponDiscount(string couponCode, double totalAfterVipDiscount);
double locationTax(int location, double totalAfterCoupon);
void displayOutputs(int priceOfLcd, int priceOfMobile, int priceOfDesktop, int quantityOfLcd, int quantityOfMobile, int quantityOfDesktop, double total, double finalTotal, double shipping, double transactionFee, double vipDiscount, double couponDiscount, double salesTax, double totalAfterTax, int loyaltyPoints);

int main()
{
    int priceOfLcd = 350;
    int priceOfMobile = 750;
    int priceOfDesktop = 2500;
    int stockOfLcd = 8, stockOfMobile = 15, stockOfDesktop = 5;
    int quantityOfLcd = 0, quantityOfMobile = 0, quantityOfDesktop = 0;
    int paymentMethod = 0;
    double totalAfterTransactionFee = 0;
    int customerType = 0;
    double totalAfterVipDiscount = 0;
    double totalAfterCouponDiscount = 0;
    double totalAfterTax = 0;
    double transactionFee = 0;
    double vipDiscount = 0;
    double couponDiscountAmount = 0;
    double salesTax = 0;
    int location = 0;
    string couponCode;

    cout << "**********************************************************" << endl;
    cout << "********************E-Commerce Store**********************" << endl;
    cout << "**********************************************************" << endl;
    cout << "Enter the quantity of LCD you want to buy (each is $350): ";
    cin >> quantityOfLcd;
    if (quantityOfLcd > stockOfLcd)
    {
        cout << "Sorry, only " << stockOfLcd << " units of LCDs are available" << endl;
        quantityOfLcd = 0;
    }

    cout << "Enter the quantity of Mobile you want to buy (each is $750): ";
    cin >> quantityOfMobile;
    if (quantityOfMobile > stockOfMobile)
    {
        cout << "Sorry, only " << stockOfMobile << " units of Mobiles are available" << endl;
        quantityOfMobile = 0;
    }
    cout << "Enter the quantity of Desktop you want to buy (each is $2500): ";
    cin >> quantityOfDesktop;
    if (quantityOfDesktop > stockOfDesktop)
    {
        cout << "Sorry, only " << stockOfDesktop << " units of Desktops are available" << endl;
        quantityOfDesktop = 0;
    }
    if (quantityOfLcd == 0 && quantityOfMobile == 0 && quantityOfDesktop == 0)
    {
        cout << "Sold Out! Closing Program";
        return 0;
    }

    double total = (priceOfLcd * quantityOfLcd) + (priceOfMobile * quantityOfMobile) + (priceOfDesktop * quantityOfDesktop);
    double finalTotal = (total > 3600) ? total * 0.9 : total;
    double shipping = (finalTotal <= 2000) ? 15.0 : 0.0;
    double totalWithShipping = finalTotal + shipping;
    int loyaltyPoints = (totalWithShipping > 2000) ? 500 : 200;

    cout << "Select a payment method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> paymentMethod;
    totalAfterTransactionFee = paymentmethod(paymentMethod, totalWithShipping);
    transactionFee = totalAfterTransactionFee - totalWithShipping;

    cout << "Enter customer type (1 for Regular, 2 for VIP): ";
    cin >> customerType;
    totalAfterVipDiscount = customertype(totalAfterTransactionFee, customerType);
    vipDiscount = totalAfterTransactionFee - totalAfterVipDiscount;

    cout << "Enter a coupon code (if any): ";
    cin >> couponCode;
    totalAfterCouponDiscount = couponDiscount(couponCode, totalAfterVipDiscount);
    couponDiscountAmount = totalAfterVipDiscount - totalAfterCouponDiscount;

    cout << "Enter your location (1, 2, or 3): ";
    cin >> location;
    totalAfterTax = locationTax(location, totalAfterCouponDiscount);
    salesTax = totalAfterTax - totalAfterCouponDiscount;
    displayOutputs(priceOfLcd, priceOfMobile, priceOfDesktop, quantityOfLcd, quantityOfMobile, quantityOfDesktop, total, finalTotal, shipping, transactionFee, vipDiscount, couponDiscountAmount, salesTax, totalAfterTax, loyaltyPoints);

    return 0;
}

double paymentmethod(int payment_method, double total_with_shipping)
{
    double total_after_transactionfee = 0;
    if (payment_method == 1)
    {
        return total_after_transactionfee = (total_with_shipping * 0.02) + total_with_shipping;
    }
    else if (payment_method == 2)
    {
        return total_after_transactionfee = (total_with_shipping * 0.03) + total_with_shipping;
    }
    else
    {
        return total_with_shipping;
    }
}

double customertype(double total_after_transactionfee, int customer_type)
{
    double total_after_vip_discount = 0;

    if (customer_type == 2)
    {
        return total_after_vip_discount = total_after_transactionfee - (total_after_transactionfee * 0.05);
    }
    else
    {
        return total_after_transactionfee;
    }
}

double couponDiscount(string couponCode, double totalAfterVipDiscount)
{
    double totalAfterCouponDiscount = 0;
    if (couponCode == "SAVE100")
    {
        return totalAfterCouponDiscount = totalAfterVipDiscount - 100;
    }
    else
    {
        return totalAfterVipDiscount;
    }
}

double locationTax(int location, double totalAfterCoupon)
{
    double taxRate = 0;
    if (location == 1)
    {
        taxRate = 0.05;
    }
    else if (location == 2)
    {
        taxRate = 0.10;
    }
    else
    {
        taxRate = 0.08;
    }
    return totalAfterCoupon * (1 + taxRate);
}

void displayOutputs(int priceOfLcd, int priceOfMobile, int priceOfDesktop, int quantityOfLcd, int quantityOfMobile, int quantityOfDesktop, double total, double finalTotal, double shipping, double transactionFee, double vipDiscount, double couponDiscount, double salesTax, double totalAfterTax, int loyaltyPoints)
{
    cout << "LCD (x" << quantityOfLcd << "): $" << priceOfLcd * quantityOfLcd << endl;
    cout << "Mobile (x" << quantityOfMobile << "): $" << priceOfMobile * quantityOfMobile << endl;
    cout << "Desktop (x" << quantityOfDesktop << "): $" << priceOfDesktop * quantityOfDesktop << endl;
    cout << "Sub Total: $" << total << endl;
    cout << "Discount: $" << total - finalTotal << endl;
    cout << "Shipping Fee: $" << shipping << endl;
    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "VIP Discount: $" << vipDiscount << endl;
    cout << "Coupon Discount: $" << couponDiscount << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Total Payable Amount: $" << totalAfterTax << endl;
    cout << "Loyalty Points Earned: " << loyaltyPoints << endl;
}
