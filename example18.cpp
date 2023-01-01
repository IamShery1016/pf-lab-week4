#include<iostream>
using namespace std;


void add(int number1,int number2);
void multiply(int number1,int number2);
void divide(float number1, float number2);
void subtract(int number1,int number2);

main(){
int firstnumber;
int secondnumber;
char operation;
while(true){
cout<<"Enter operator(+,-,*,/):";
cin>>operation;
cout<<"Enter first number:";
cin>>firstnumber;
cout<<"Enter second number:";
cin>>secondnumber;
if(operation=='+')
add(firstnumber,secondnumber);
if(operation=='*')
multiply(firstnumber,secondnumber);
if(operation=='/')
divide(firstnumber,secondnumber);
if(operation=='-')
subtract(firstnumber,secondnumber);
}


}

void add(int number1,int number2){
int sum=number1+number2;
cout<<"sum:"<<sum<<endl;
}
void multiply(int number1,int number2){
int multiply=number1*number2;
cout<<"Multiplication:"<<multiply<<endl;
}
void divide(float number1, float number2){
int division=number1/number2;
cout<<"Division:"<<division<<endl;
}
void subtract(int number1,int number2){
int subtract=number1-number2;
cout<<"Subtraction is:"<<subtract<<endl;
}