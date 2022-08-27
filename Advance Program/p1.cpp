#include <iostream>
using namespace std;


//Question 
/* Write a C++ program to print the appropriate activity depending on the variable temperature and humidity
value. The table below assumes that the temperature can only be warm and cold, and the humidity can
only be dry and humid. */
main(){
string tem,humd;
cout<<"Enter the temprature(warm or cold):";
cin>>tem;
cout<<"Enter the humidity(dry or humid):";
cin>>humd;
if(tem=="warm" && humd=="dry"){
cout<<"play tennis";
}
if(tem=="warm" && humd=="humid"){
cout<<"swim";
}
if(tem=="cold" && humd=="dry"){
cout<<"play basketball";
}
if(tem=="cold" && humd=="humid"){
cout<<"watch TV";
}



}