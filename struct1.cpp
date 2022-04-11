#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
//a program to use structure 
using namespace std;
struct student {
    int roll,grade,score;
    char name[30];   
};

student enter(struct student s)
{
    cout<<"Enter the Name, Grade, Roll and Score of the student:\n";
    cin>>s.name>>s.grade>>s.roll>>s.score;
    return s;
}
 void display(struct student *s,int n)
 {
     for(int i=0;i<n;i++)
        {   
         cout<<"The entered student data is as below:\n";
         cout<<"Name:"<<(s+i)->name<<endl<<"Grade:"<<(s+i)->grade<<endl<<"Roll:"<<(s+i)->roll<<endl<<"Score:"<<(s+i)->score<<endl<<endl;
        }
 }
 int main()
 {
     system("cls");
     int n,i;
     cout<<"\t\t\n---------Welcome to school student data collector---------\t\t\n\n";
     cout<<"Press any key to continue..."<<endl;
     getch();
     system("cls");
     cout<<"Enter the number of students whose record to be taken"<<endl<<":";
     cin>>n;
     student s[n];
     for(i=0;i<n;i++)
     {
         s[i]=enter(s[i]);
     }
     system("cls");
     display(s,n);
     getch();
     return(0);
 }