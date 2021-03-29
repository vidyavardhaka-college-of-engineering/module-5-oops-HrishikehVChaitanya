//Find the missing statement in the given C++ program to find simple interest

//Expected input and output
//Input: Enter two numbers: 100 10 1 
//Output: The product of two numbers is 10

#include <iostream>
using namespace std;
int main()
{
    int s,p,t,r; //declare the varibales
    std::cout << "Enter the values of p,t,r: " <<endl;//find the missing statement
    std::cin >> p >> t >> r; //find the missing statement
                           s=(p*t*r)/100; //find the missing expression to calculate simple interest
    std::cout <<"the product of two numbers"<< s;  
    return 0;
}
