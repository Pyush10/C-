#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
// a program to sort given numbers in ascending order using concept of DMA
int main(){
    int n,i,temp,*ptr;
    system("cls");
    cout<<"\t\t\t\t------Enter the number of data to be entered------- "<<endl;
    cout<<":";
    cin>>n;
    ptr=new int[n];
    system("cls");
    cout<<"\t------Enter the numbers to be sorted in ascending order------ \t\t\n";
    cout<<":";
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
          if(ptr[i]>ptr[j])
          {
            temp=ptr[j];
            ptr[j]=ptr[i];
            ptr[i]=temp;
          }
        }
    }
    cout<<"\nThe required list of numbers in ascending order is given below:\n";
    for(i=0;i<n;i++)
    {
        cout<<ptr[i]<<"\t";
    }
    getch();
    delete []ptr;
    return(0);
}