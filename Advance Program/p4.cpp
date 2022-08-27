#include <iostream>
using namespace std;


// Question
/* Write a Program to display an Astrological sign or a Zodiac sign for a given date of birth. Zodiac Signs
according to the dates and months 
The program takes the date and month of birth as input, and then displays the astrological sign or Zodiac
sign according to that input.*/

main(){
int day;
string mon,zodiacsign;
cout<<"Enter the date of birth:";
cin>>day;
cout<<"Enter the month of your birth:";
cin>>mon;
if(day>=21 && mon=="march" || day<=19 && mon=="april"){
    cout<<"Aries";

}
if(day>=20 && mon=="april" || day<=20 && mon=="may"){
    cout<<"Taurus";
}
if(day>=21 && mon=="may" || day<=20 && mon=="june"){
    cout<<"Gemini";
}

if(day>=21 && mon=="june" || day<=22 && mon=="july"){
    cout<<"Cancer";
}

if(day>=23 && mon=="july" || day<=22 && mon=="August"){
    cout<<"Leo";
}

if(day>=23 && mon=="august" || day<=22 && mon=="september"){
    cout<<"Virgo";
}

if(day>=23 && mon=="september" || day<=22 && mon=="october"){
    cout<<"Libra";
}

if(day>=23 && mon=="october" || day<=21 && mon=="november"){
    cout<<"Scorpio";
}

if(day>=22 && mon=="november" || day<=21 && mon=="december"){
    cout<<"Sagittarius";
}

if(day>=22 && mon=="december" || day<=19 && mon=="january"){
    cout<<"Capricorn";
}

if(day>=20 && mon=="january" || day<=18 && mon=="february"){
    cout<<"Aquarius";
}

if(day>=19 && mon=="february" || day<=20 && mon=="march"){
    cout<<"Pisces";
}






































}
