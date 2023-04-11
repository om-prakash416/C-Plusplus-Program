#include<iostream>
using namespace std;
class myclass{
	public:
		void myfunction(){
			cout<<"some content in parent class." ;
		}
	};
	class mychild:public myclass
	{
	};
	class mygrandchild:public mychild
	{	
	};
	int main(){
		mygrandchild op;
		op.myfunction();
		return 0;
	}
