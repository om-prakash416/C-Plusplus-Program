#include<iostream>
using namespace std;
class hero
{
	private:
		int health;
		public:
			char level;
			int gethealht()
			{
				return health;
			}
			char getlevel()
			{
				return level;
			}
			void sethealth(int h) {
				health=h;
			}
			void sethealth(char ch)
			{
				level=ch;
			}
};
int main() {
	hero monu;
	cout<<"monu health"<<monu.gethealht()<<endl;
	monu.sethealth(34);
	monu.level='A';
	cout<<"health is"<<monu.gethealht();
	cout<<"level is "<<monu.level<<endl;
	return 0;
}
