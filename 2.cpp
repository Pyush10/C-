#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
//Fuction overloading example
float volume(float);
float volume(float,float);
float volume(float,float,float);
int main(){
    system("cls");
    float r,l,b,h;
    int n;
    float v;
    cout<<"\t\t\t\t ||||||------------ Welcome to Volume Calculator -------------||||||\t\t\t\t\n\n";
    cout<<"Choose the number from the list of 3D shape whose volume is to be determined:\n\n";
    cout<<"\t\t 1. Cylinder \t\t\t 2. Cube \t\t\t 3. Cuboid"<<endl;
    cin>>n;
    system("cls");
    switch(n){
    
    case 1 :
    cout<<"Enter radius and height of cylinder"<<endl;
    cin>>r>>h;
    v=volume(r,h);
    cout<<"Volume of cylinder is: "<<v;
    break;

    case 2 :
    cout<<"Enter the length of side of cube\n";
    cin>>l;
    v=volume(l);
    cout<<"Volume of cube is: "<<v;
    break;

    case 3 :
    cout<<"Enter the length, breadth and height of the cuboid\n";
    cin>>l>>b>>h;
    v=volume(l,b,h);
    cout<<"Volume of cuboid is: "<<v;
    break;
    }

    cout<<"\n\nPress any key to continue:";
    getch();
    system("cls");
}
float volume(float r, float h){
    return(M_PI*r*r*h);
}
float volume(float l){
    return(l*l*l);
}
float volume(float l,float b,float h){
    return(l*b*h);
}