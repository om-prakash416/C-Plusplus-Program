#include<iostream>
using namespace std;
// c++ program to make a simple calculator to add,sub,multi or divide using switch...case statement
int main(){
    char op;
    float n1,n2;
    cout<<"enter an arithematic operator(+ - * /)\n";
    cin>>op;
    cout<<"enter two numbers as operands\n";
    cin>>n1>>n2;

    switch(op){
        case '+':
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;
        case '-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;
        case '*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;
        case '/':
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;
        default:
        cout<<"error:unsupported operation";
    }
    return 0;
}

