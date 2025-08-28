#include <stdio.h>              

int main() {                           //Main function
    int age;                                     //declare int variable age
    int VIP_level;                               //declare int variable VIP_level
    float purchase_amount;                        //declare float variable purchase_amount

    printf("Enter age: ");                             //prompt user to enter age
    scanf("%d", &age);                                  //read age from user input
    printf("Enter your VIP level (1-5): ");              //prompt user to enter VIP level
    scanf("%d", &VIP_level);                             //read VIP level from user input
    printf("Enter your purchase amount: \n");             //prompt user to enter purchase amount
    scanf("%f", &purchase_amount);                        //read purchase amount from user input

    printf("--- Customer Info ---\n");                                    //print customer info header
    printf("Age: %d | VIP level: %d | Amount: %.2f\n", age, VIP_level, purchase_amount);          //print customer info

     // Check for discounts based on age, VIP level, and purchase amount

    if ((age >= 60) || ((VIP_level == 3) || (VIP_level == 4))) {                      //if age is 60 or older or VIP level is 3 or 4
        printf("Discount received: 20%%!\n");                                         //print discount received 20%

    } 
    else if (((age >= 30) && (age <= 40)) && (purchase_amount > 2000)) {               //if age is between 30 and 40 and purchase amount is greater than 2000
        printf("Discount received: 15%%!\n");                                          //print discount received 15%
        
    } 
    else if (((age >= 18) && (age <= 25)) && (purchase_amount > 1000)) {              //if age is between 18 and 25 and purchase amount is greater than 1000
        printf("Discount received: 10%%!\n");                                         //print discount received 10%
    } 
    else if ((VIP_level == 5) || (purchase_amount > 50000)) {                         //if VIP level is 5 or purchase amount is greater than 50000
        printf("Discount received: 25%%!\n");                                         //print discount received 25%
    } 
    else {                                                                    //if none of the above conditions 
        printf("No Discount applied.\n");                                    //print no discount applied
    } 

    printf("Thank you for shopping with us!\n");                          //print thank you message
    return 0;                                    //return 0 to indicate successful completion
}