#include<iostream>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"enter the size of the integer array: ";
    cin>> size;
    cout<<"creating an array of the size"<<size<<"..";
    arr=new int[size];
    cout <<"\n dynamic allocation of memory for array arris successful.";
    delete arr;
    return 0;
}