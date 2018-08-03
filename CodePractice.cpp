//=========================Hello World Program===============================
/*
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, World!";
   return 0;
}
/*/
//====================Enter a number by user choice=============================
/*
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "You entered " << number;
    return 0;
}
/*/
//==============================ADD two numbers=================================
#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;
    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    // Prints sum
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;
    return 0;
}

