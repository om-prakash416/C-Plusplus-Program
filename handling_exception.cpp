
try{
	int age=15;
	if(age>=18){
		cout<<"access granted  -you are old enough.";
	}
	else
	{
		throw(age);
	}
}
catch(int mynum){
	cout<<"access denied -you must be at least 18years old.\n";
	cout<<"age is : "<<mynum;
}}
