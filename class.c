#include<iostream>
using namespace std;
class employee{
	private:
		int a,b,c;
		public:
			int d,e,f;
			void setdata(int a1,int b1,int c1);
			void getdata(){
				cout<<"the value of a is: "<<a<<endl;
			cout<<"the value of a is: "<<b<<endl;
				cout<<"the value of a is: "<<c<<endl;
					cout<<"the value of a is: "<<d<<endl;
						cout<<"the value of a is: "<<e<<endl;
			}
};
void employee::setdata(){
	a=a1;
	b=b1;
	c=c1;
}
int main(){
	employee harry;
	harry.setdata(1,5,6);
	harry.getdata();
	return 0;
}
