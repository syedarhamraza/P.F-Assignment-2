E-Commerce Store Payment System
===============================

Overview
--------

This E-Commerce Store Payment System allows users to purchase items from a virtual store and calculates the final total by applying various discounts, transaction fees, taxes, and loyalty points. The system provides an interactive console-based interface to input purchase details, apply discounts, calculate transaction fees, and calculate the total payable amount after considering shipping and taxes.

Features
--------

1.  **Product Selection**:
    
    *   Users can select from a range of products: LCDs, Mobiles, and Desktops.
        
    *   Stock availability is checked during product selection.
        
2.  **Discounts & Coupons**:
    
    *   VIP customers get a 5% discount on the total after transaction fees.
        
    *   A coupon code (SAVE100) offers an additional $100 discount.
        
3.  **Payment Methods**:
    
    *   Supports three payment methods: Credit Card, PayPal, and Cash.
        
    *   Credit Card and PayPal incur a transaction fee of 2% and 3%, respectively.
        
4.  **Shipping**:
    
    *   Shipping fees are added to the total based on the final order amount.
        
    *   Free shipping is applied for orders over $2000.
        
5.  **Taxes**:
    
    *   Sales tax is calculated based on the user's location (tax rates vary for three different locations).
        
6.  **Loyalty Points**:
    
    *   Users earn loyalty points based on the order amount. Customers receive 500 points for purchases over $2000 and 200 points for smaller purchases.
        
7.  **Order Summary**:
    
    *   A final summary is displayed with details of the items purchased, discounts applied, transaction fees, shipping, taxes, and the total payable amount.
        

How It Works
------------

1.  **Input Data**:
    
    *   Users are prompted to enter the quantity of products they want to purchase.
        
    *   The system verifies the stock and updates the quantity accordingly.
        
    *   Users select their preferred payment method, customer type (Regular or VIP), and enter a coupon code if they have one.
        
    *   Users provide their location for tax calculation.
        
2.  **Processing the Data**:
    
    *   The system calculates the total price for the selected products.
        
    *   It applies discounts (VIP, coupon code) and transaction fees.
        
    *   The system calculates the applicable sales tax based on the provided location.
        
    *   The total payable amount is calculated after applying all discounts, shipping fees, and taxes.
        
3.  **Output**:
    
    *   The system outputs a detailed breakdown of the order, including the items purchased, total price, discounts, transaction fees, taxes, and loyalty points earned.
        

Requirements
------------

*   A C++ compiler (e.g., GCC, MSVC) to compile and run the program.
    
*   Basic understanding of C++ syntax, functions, and data structures.
    

Functions
---------

The program uses the following functions:

*   **paymentmethod**: Calculates the transaction fee based on the selected payment method.
    
*   **customertype**: Applies a VIP discount (if applicable).
    
*   **couponDiscount**: Applies a coupon code discount (if applicable).
    
*   **locationTax**: Calculates the sales tax based on the user's location.
    
*   **displayOutputs**: Displays the detailed order summary with all calculations.
    

How to Run
----------

1.  Copy the C++ code into your IDE or text editor.
    
2.  Compile the code using a C++ compiler.
    
3.  Run the executable and follow the on-screen instructions to enter your purchase details.
    

Example Workflow
----------------

1.  **Enter product quantities**: Choose how many LCDs, Mobiles, and Desktops you want to buy.
    
2.  **Select payment method**: Choose from Credit Card, PayPal, or Cash.
    
3.  **Enter customer type**: Choose between Regular or VIP customer.
    
4.  **Apply coupon**: Enter a coupon code (if available).
    
5.  **Select location**: Choose your location (for tax calculation).
    
6.  **View order summary**: The system will display a detailed breakdown of the total price, discounts, fees, and loyalty points.
    

Conclusion
----------

This E-Commerce Store Payment System simulates a real-world online shopping experience by calculating the total cost of an order based on user input, applying various discounts and transaction fees, and providing an order summary with taxes and loyalty points. It is a useful tool for understanding basic payment systems and e-commerce workflows in a console-based application.
