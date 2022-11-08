# include <iostream>
using namespace std;
void input(int &y);
int IsLeap(int y);
void output(int result);
int main()
{
	int y;
	input(y);
	int result =IsLeap(y);
	output(result);
	return 0;
}

void input(int &y)
{
	cin>>y;
}
int IsLeap(int y)
{
	if((y%4==0)&&(y%100!=0) || (y%400==0))
		return 1;
	return 0;
}
void output(int result)
{
	if(result ==1 )
		cout<<"This is a Leap year";
	else 
		cout<<"This is not a Leap year";
}


