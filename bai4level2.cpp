# include <iostream>
using namespace std;
void input (int &m, int &y);
int checkYear( int y);
void output(int point, int m);
int main()
{
	int m,y;
	input(m,y);
	int point=checkYear(y);
	output(point,m);
	return 0;
}

void input (int &m, int &y)
{
	cin>>m>>y;
}

int checkYear(int y)
{
	if ((y%4==0)&&(y%100!=0) ||(y%400==0))
		return 1;
	return 0;
}

void output(int point, int m)
{
	if (point==0)
	{
		if (m==2)
			cout<<"Have 28 days";
		else 
			if (m>0 && m<=12)
				if (m<7)
					if (m%2!=0)
						cout<<"Have 31 days";
					else
							cout<<"Have 30 days ";
				else
					if (m%2==0)
							cout<<"Have 31 days";
					else
							cout<<"Have 30 days";
	}
	else 
	{
		if (m==2)
			cout<<"Have 29 days";
		else 
			if (m>0 && m<=12)
				if (m<7)
					if (m%2 !=0)
						cout<<"Have 31 days";
					else
							cout<<"Have 30 days ";
				else
					if (m%2==0)
							cout<<"Have 31 days";
					else
							cout<<"Have 30 days";
	}
}

