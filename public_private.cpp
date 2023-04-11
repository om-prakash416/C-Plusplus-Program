#include<iostream>
using namespace std;
class myclass{
	public:
		int x;
		private:
			int y;
		};
		int main(){
			myclass myobj;
			myobj.x=25;
//			myobj.y=5;
			cout<<myobj.x;
			
			return 0;
		}
