#include<iostream>
using namespace std;

void maximum(int number1,int number2);
void mmaximum(int number1,int number2);
void minimum(int number1,int number2);
void mminimum(int number1,int number2);

main(){
int number1;
cout<<"Enter your 1 number:";
cin>>number1;
int number2;
cout<<"Enter your 2 number:";
cin>>number2;
maximum( number1, number2);
mmaximum( number1, number2);
 minimum( number1, number2);
 mminimum( number1, number2);
}

void maximum(int number1,int number2){

if(number1>=number2){
cout<<"number1";}
}
void mmaximum(int number1,int number2){
if(number2>=number1){
cout<<"number2";
}
}
void minimum(int number1,int number2){

if(number1<=number2){
cout<<"number1";
}
}
void mminimum(int number1,int number2){
if(number2>=number1){
cout<<"number1";
}
}