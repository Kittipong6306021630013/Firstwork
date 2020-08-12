#include <iostream>
using namespace std;
int Calage(int);
int main()
{
	int years;
	for(int i=1;i<=3;i++){
		cout<<"Enter Year  "<<i<<": ";
		cin>>years;
		int age=Calage(years);
		cout<<"Age"<<i<<": "<<age<<endl;
	}	
	return 0;
}
int Calage(int y)
{	int age;
	age=2563-y;
	return(age);
}
