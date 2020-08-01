#include <iostream>
using namespace std;
void cal_quiz(short,short,float,int,int);
int main()
{
	cout<<"===========QUIZZES============"<<endl;
	int First,Second,Third,Mt,Final;
	cout<<"Enter first quizz (10): ";
	cin>>First;
	cout<<"Enter second quizz (10): ";
	cin>>Second;
	cout<<"Enter third quizz (10): ";
	cin>>Third;
	cout<<"===========MID-TERM==========="<<endl;
	cout<<"Enter mid-term (40): ";
	cin>>Mt;
	cout<<"===========Final=============="<<endl;
	cout<<"Enter Final (50): ";
	cin>>Final;
	cal_quiz(First,Second,Third,Mt,Final);
	system ("pause");
	return 0;
}
void cal_quiz (short F,short S,float T,int Mt,int Fi)
{	
	float Qt;
	Qt=((F+S+T)/3)+Mt+Fi;
	cout<<"Mid term : "<<Mt<<endl;
	cout<<"Final : "<<Fi<<endl;
	cout<<"Total : "<<Qt<<endl;
	cout<<"Your score is ";
	cout<<((Qt>=50) ? " Pass ":" Fail ")<<endl;
}
