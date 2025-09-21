#include <iostream>
#include <iomanip>
int main ()
{
    double billAmount {};
    double tipPercentage {};
    double numberOfPeople {};


    std::cout << "Welcome to the tip calculator!" "\n";

    std::cout<< "Enter the bill amount: ";
    std::cin >> billAmount;

    std::cout<< "Enter the tip percentage (without the percentage sign): ";
    std::cin >> tipPercentage;

    std::cout<< "Enter the number of people to split the bill with including yourself: ";
    std::cin >> numberOfPeople;

    double tipAmount {billAmount * (tipPercentage/100)};
    double totalBill {billAmount + tipAmount};
    double billPerPerson {totalBill / numberOfPeople};

     std::cout << std::fixed << std::setprecision(2); 

    std::cout<< "The original bill: $" << billAmount<< "\n";
    std::cout<< "The tip percentage: $" << tipPercentage << "\n";
    std::cout<< "The tip amount: $" << tipAmount << "\n";
    std::cout<< "Total bill: $" << totalBill << "\n";
    std::cout<< "Bill per person: $" << billPerPerson << "\n";

    std::cout<< "Thank you for using the tip calculator!" "\n";

    return 0;
}
