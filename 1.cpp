#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
//Beginning with Classes in C++;
 class student{
     private: int roll_no;
     public: void enter(){
         cout<<"Enter roll no of student \n";
         cin>>roll_no;
     }
     void display(){
         cout<<"Roll No= " << roll_no;
     }
 };
  int main() {
      system("cls");
      student a; // This is object creation;
      a.enter(); // Function call using dot operator;
      a.display();
      getch;
      return(0);
  }