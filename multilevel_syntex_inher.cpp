#include<iostream>
using namespace std;
class a{
	public:
		void afunc(){
			cout<<"func a\n";
		}
};
class b: public a{
	public:
		void bfunc(){
			cout<<"func b\n";
		}
};
class c:public b{
	public:
};
int main(){
	c t;
	t.afunc();
	t.bfunc();
}
