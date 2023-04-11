#include<iostream>
using namespace std;
int main(){
    int n,i,t1=0,t2=2;
    int nextterm=t1+t2;
    cout<<"enter a number of term: ";
    cin>>n;
    cout<<"fibonacci series: "<<t1<<t2;
    for ( i = 3; i <=3; ++i)
    {
        cout<<nextterm;
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
}