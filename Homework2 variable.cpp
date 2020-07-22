//****homework2***********
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name ;
	float salary ;
	float sale ;
	float commisper ;

	cout<<"****homework2***********\n";
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter salary : ";
	cin>>salary;
	cout<<"Enter sale : ";
	cin>>sale;
	cout<<"Enter Commission Percent : ";
	cin>>commisper;
	cout<<"Your name ="<<name<<" "<<endl;
	cout<<"Total Revenue \t"<<(sale*commisper/100)+salary<<endl;
	system ("pause");

	return(0);
}