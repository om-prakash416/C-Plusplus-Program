#include<iostream>
using namespace std;
class vehicle{
	public:
		string brand="ford";
		void honk(){
		cout<<"tuut,tuut!\n";
		}
	};
	class car:public vehicle{
		public:
			string model="mustang";
	};
	int main(){
		car op;
		op.honk();
		cout<<op.brand + " " + op.model;
		return 0;
	}
