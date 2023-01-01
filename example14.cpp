#include<iostream>
using namespace std;

void calculateBill(float purchaseamount,string day);


main(){
string day;
cout<<"Enter day name:";
cin>>day;
float purchaseamount;
cout<<"Enter Purchase Amount:";
cin>>purchaseamount;
calculateBill(purchaseamount,day);

}

void calculateBill(float purchaseamount,string day){
if(day=="sunday"){
float total=(purchaseamount/100)*10;
float ttotal=purchaseamount-total;
cout<<"Payable amount is:"<<ttotal;
}
}


void calculateBill(float purchaseamount,string day){if(day!="sunday"){
float total=(purchaseamount/100)*5;
float ttotal=purchaseamount-total;
cout<<"Payable amount is:"<<ttotal;
}

}