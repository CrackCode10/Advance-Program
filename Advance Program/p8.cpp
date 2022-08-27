#include <iostream>
using namespace std;
main(){
int sth,stm,ath,atm,late;

cout<<"Enter the exam starting time in hour:";
cin>>sth;
cout<<"Enter the exam starting time in minutes:";
cin>>stm;
cout<<"Enter the arrival time in hour:";
cin>>ath;
cout<<"Enter the arrival time in minutes:";
cin>>atm;
if(atm>stm || ath>sth){
   late=atm-stm;
   cout<<"late"<<endl;
    cout<<late<<" minutes after the exam started";

}







}