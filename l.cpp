#include<iostream>
using namespace std;
class hero
{
          	public:
		int health;
	
		char level;
		string name[100];
};
int main()
{
	hero monu;
	monu.health=345;
	monu.level='a';
//	monu.name='moniuuyadav';
	cout<<"health is:"<<monu.health<<endl;
	cout<<"level is:"<<monu.level<<endl;
	//cout<<"name is :"<<monu.name<<endl;
	return 0;
}
