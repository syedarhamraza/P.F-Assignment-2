#include <iostream>
#include <string>
using namespace std;

int paymentmethod(int payment_method, double total_with_shipping);
double customertype(double total_after_transactionfee, int customer_type);
double couponDiscount(string couponCode, double totalAfterVipDiscount);
double locationTax(int location, double totalAfterCoupon);
void displayOutputs(int priceOfLcd, int priceOfMobile, int priceOfDesktop, int quantityOfLcd, int quantityOfMobile, int quantityOfDesktop, int total, double finalTotal, double totalWithShipping, double totalAfterTransactionFee, double totalAfterVipDiscount, double totalAfterCouponDiscount, double totalAfterTax);

int main()
{
    double priceOfLcd = 350.0;
    double priceOfMobile = 750.0;
    double priceOfDesktop = 2500.0;
    int quantityOfLcd, quantityOfMobile, quantityOfDesktop;
    int paymentMethod = 0;
    double totalAfterTransactionFee = 0;
    int customerType = 0;
    double totalAfterVipDiscount = 0;
    double totalAfterCouponDiscount = 0;
    double totalAfterTax = 0;
    int location = 0;
    string couponCode;

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

    cout << "Select a payment method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> paymentMethod;
    totalAfterTransactionFee = paymentmethod(paymentMethod, totalWithShipping);
    cout << "Enter customer type (1 for Regular, 2 for VIP): ";
    cin >> customerType;
    totalAfterVipDiscount = customertype(totalAfterTransactionFee, customerType);
    cout << "Enter a coupon code (if any): ";
    cin >> couponCode;
    totalAfterCouponDiscount = couponDiscount(couponCode, totalAfterVipDiscount);
    cout << "Enter your location (1, 2, or 3): ";
    cin >> location;
    totalAfterTax = locationTax(location, totalAfterCouponDiscount);

    displayOutputs(priceOfLcd, priceOfMobile, priceOfDesktop, quantityOfLcd, quantityOfMobile, quantityOfDesktop, total, finalTotal, totalWithShipping, totalAfterTransactionFee, totalAfterVipDiscount, totalAfterCouponDiscount, totalAfterTax);

    return 0;
}

int paymentmethod(int payment_method, double total_with_shipping)
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
    double totalWithTax = 0;
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
    return totalWithTax = totalAfterCoupon * (1 + taxRate);
}

void displayOutputs(int priceOfLcd, int priceOfMobile, int priceOfDesktop, int quantityOfLcd, int quantityOfMobile, int quantityOfDesktop, int total, double finalTotal, double totalWithShipping, double totalAfterTransactionFee, double totalAfterVipDiscount, double totalAfterCouponDiscount, double totalAfterTax)
{
    cout << "LCD (x" << quantityOfLcd << "): $" << priceOfLcd * quantityOfLcd << endl;
    cout << "Mobile (x" << quantityOfMobile << "): $" << priceOfMobile * quantityOfMobile << endl;
    cout << "Desktop (x" << quantityOfDesktop << "): $" << priceOfDesktop * quantityOfDesktop << endl;
    cout << "Sub Total: $" << total << endl;
    cout << "Discount: $" << total - finalTotal << endl;
    cout << "Shipping Fee: $" << totalWithShipping - finalTotal << endl;
    cout << "Transaction Fee: $" << totalAfterTransactionFee - totalWithShipping << endl;
    cout << "Coupon Discount: $" << totalAfterVipDiscount - totalAfterCouponDiscount << endl;
    cout << "Sales Tax: $" << totalAfterTax - totalAfterCouponDiscount << endl;
    cout << "Total Payable Amount: $" << totalAfterTax << endl;
}
