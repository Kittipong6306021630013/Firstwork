#include <iostream>
#include <iomanip>
using namespace std;
int cal_bonus(int salary);
void display(int salary[],int num);
int main()
{
	int num;
	cout<<"Enter Number of person :";
	cin>>num;
	int *salary=new int[num];
	for(int i=0;i<num;i++)
	{	cout<<"Enter the salary "<<i+1<<" :";
		cin>>salary[i];
	}
	display(salary,num);
	return 0;
}
int cal_bonus(int salary)
{	int bonus=0;
	bonus=salary*2;
	return bonus;
}
void display(int salary[],int num)
{	for(int i=0;i<num;i++)
	{cout<<"There are "<<num<<"person."<<endl;
	cout<<"The salary for person"<<i+1<<"="<<salary[i]<<"and Bonus = "<<cal_bonus(salary[i])<<endl; 
	}
}	