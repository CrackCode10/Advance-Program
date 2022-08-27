#include <iostream>
using namespace std;



// Question 
/* Jack is a teacher who needs a program that helps him to compile 8th class results. He has five subjects
(English, Maths, Chemistry, Social Science, and Biology) marked in detail. Program asks the user to enter
five subjects' marks, including student name and displays the total marks, percentage, grade (by
percentage), and student name. Every subject has a total of 100 marks. Grading policy details are
mentioned below */
main(){
int Eng,chem,math,SSci,bio,total,perc;
string name;
string grade;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter the marks of English:";
cin>>Eng;
cout<<"Enter the marks of math:";
cin>>math;
cout<<"Enter the marks of chemistry:";
cin>>chem;
cout<<"Enter the marks of social science:";
cin>>SSci;
cout<<"Enter the marks of biology:";
cin>>bio;
total=Eng+math+chem+SSci+bio;
perc=total/500.0*100;
if(perc>90 && perc<=100){
grade="A+";

}
if(perc>80 && perc<90){
grade="A";

}
if(perc>70 && perc<80){
grade="B+";
}
if(perc>60 && perc<70){
grade="B";
}
if(perc>50 && perc<60){
grade="C";
}
if(perc>40 && perc<50){
grade="D";
}
if(perc<40){
grade="F";
}
cout<<"Student name:"<<name<<endl;
cout<<"Total marks:"<<total<<endl;
cout<<"Obtain percentage:"<<perc<<" % "<<endl;
cout<<"Obtain Grade:"<<grade;







}