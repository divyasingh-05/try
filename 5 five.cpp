// Write a program to input two numbers and print the sum of 30% of each number.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum;
    cout<<"Enter first number ";
    cin>> num1;
    cout<<"Enter second number ";
    cin>>num2;
    sum=(num1*30/100)+(num2*30/100);
    cout <<"Sum is "<<sum<<endl;
    return 0;
}
