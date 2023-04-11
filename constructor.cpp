#include<iostream>
using namespace std;
//class myclass{//class
//	public://access specifier
//		myclass(){//constructor
//			cout<<"hello world";
//		}
//	};
//	int main(){
//		myclass obj;//create an object of myclass(this will call constructor 
//		return 0;
//		
//	}
//	
class employee{
	public:
		static int count;
		string ename;
		employee(){
			count++;
		}
		void setname(string name){
			ename=name;
		}
		static int getcount(){
			return count;
		}
};
int employee::count=0;
int main(){
	employee op;
	employee op1;
	employee op2;
	cout<<employee::getcount()<<endl;
}
