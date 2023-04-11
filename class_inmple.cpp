#include<iostream>
using namespace std;
 class item{
    int n;//  private by default
    float cost;//private by default
    public:
    void getdata(int a,float b);//prototype declaration
                              // to be defined
    //fuction defined inside class 
    void putdata (void)
    {
        cout<<"number : "<<n<<"/n";
        cout<<"cost: "<<cost<<"\n";
    }
 };
 //....member function defination ......
 void item:: getdata(int a,float b)// use membership label
 {
    n=a;//private variables
    cost=b;//directly used
 }
 //......main programm....
 int main(){
    item x;// create object x  
    cout<<"\nobject x"<<"\n";
    x.getdata(100,299.95);// call member function
    x.putdata();//call member function
    item y;//create another object
    cout<<"\n object y"<<"\n";
    y.getdata(200,175.50);
    y.putdata();
    return 0;
 }