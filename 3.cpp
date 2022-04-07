#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
// program for adding two numbers using Dynamic Memory Allocation(DMA)
int main(){
    system("cls");
    int *pa, *pb, *psum;
    pa=new int;
    pb=new int;
    psum=new int;
    cout<<"Enter two numbers that are to be added:"<<endl;
    cin>>*pa>>*pb;
    *psum = *pa + *pb;
    cout<<"Sum = "<<*psum<<endl;
    delete pa;
    delete pb;
    getch;
    return(0);
}