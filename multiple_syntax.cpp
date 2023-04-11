#include<iostream>
using namespace std;
class A
{
	public:
		void Afunc(){
			cout<<"funcA\n";
		}
};
class B
{
	void Bfunc(){
		cout<<"funcB\n";
	}
};
class C:public A,public B
{
	public:
};
int main(){
	C obj;
	obj.Afunc();
	obj.Bfunc();
	
}
