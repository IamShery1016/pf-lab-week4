#include<iostream>
using namespace std;

void even(int number);
void odd(int number);
main(){
while(true){
int number;
cout<<"Enter your number:";
cin>>number;
even(number);
odd(number);
}

}
void even(int number){
if(number%2==0){
cout<<"Even";}
}
void odd(int number)
{
if(number%2==1){
cout<<"odd";}
}
