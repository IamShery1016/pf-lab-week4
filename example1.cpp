#include<iostream>
using namespace std;
void display(int marks,string name,float aggregate,char section);

main(){
string name;
int marks;
float aggregate;
char section;
cout<<"My name is:";
cin>>name;
cout<<"My marks are:";
cin>>marks;
cout<<"My aggregate is:";
cin>>aggregate;
cout<<"My section is:";
cin>>section;
display(marks,name,aggregate,section);
}
void display(int marks,string name,float aggregate,char section){
cout<<"Your marks are:"<<marks<<endl;
cout<<"Your name is:"<<name<<endl;
cout<<"Your aggregate is:"<<aggregate<<endl;
cout<<"Your section is:"<<section<<endl;
}