#include<iostream>
using namespace std;
class myclass{
	public:
		void myfunction(){
			cout<<"some content in pRENT CLASS.";
		}
	};
	class myotherclass{
		public:
			void myotherfunction(){
				cout<<"some content in another class.";
			}
	};
	class mychildclass:public myclass,public myotherclass{
	};
	int main(){
		mychildclass op;
		op.myfunction();
		op.myotherfunction();
		return 0;
		
	}
