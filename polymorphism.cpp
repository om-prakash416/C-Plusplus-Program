#include<iostream>
using namespace std;
class animal{
	public:
	void animalsound(){
		cout<<"the animal makes a sound \n";
	}
	};
	class pig:public animal{
		public:
			void animalsound(){
				cout<<"the pig says: wee wee\n";
			}
	};
	class dog:public animal{
		public:
			void animalsound(){
				cout<<"the dog says:bow wow \n";
			}
	};
	int main(){
		animal myanimal;
		pig mypig;
		dog mydog;
		myanimal.animalsound();
		mydog.animalsound();
		mypig.animalsound();
		return 0;
	}
	
