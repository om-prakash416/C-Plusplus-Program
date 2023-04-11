#include<iostream>
using namespace std;
class car{
	public:string brand;
	string model;
	int year;
//	car(string x,string y,int z){ //constructor with parameters
//	brand =x;
//	model=y;
//	year=z;}
//};
	car(string x,string y,int z); //constructor declaration
};
//constructor defination outside the class
	car::car(string x,string y,int z){
	brand =x;
	model=y;
	year=z;
	}
	
	int main(){
		//create car object AND CALL THE constructor with different alues
		car op("bmw","x5",1999);
		car op2("ford","mustang",1549);
		//print values
		cout<<op.brand<<endl<<op2.model<<endl<<op.year<<"\n";
		cout<<op2.brand<<endl<<op2.model<<endl<<op2.year;

}
