#include<iostream>
int main(){
    int sum=0, value=0;
    std::cout<<"Enter number to add"<<std::endl;
    while(std::cin >> value)//will return false either in the case of end of file or invalid input.
    sum += value;
    std::cout<<"Sum="<<sum<<std::endl;
    return 0;
}