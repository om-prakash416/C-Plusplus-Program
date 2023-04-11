#include<iostream>
using namespace std;
class employee {
	protected:
		int salary;
	};
	class programmer:public employee{
		public:
			int bonus;
			void setsalary(int s){
				salary=s;
			}
			int getsalary(){
				return salary;
			}
	};
	int main(){
		programmer op;
		op.setsalary(52263262632);
		op.bonus=150000;
		op.getsalary();
	cout<<"salary: "<<op.getsalary()<<"\n"<<"bonus: "<<op.bonus;
	return 0;
}
	
