# include <iostream>
using namespace std;
void input(int &h, int &m, int &s);
int checkTime(int gio, int phut, int giay);
void output(int kq);

int main()
{
	int h,m,s;
	input(h,m,s);
	int kq=checkTime(h,m,s);
	output(kq);
	return 0;	
}

void input( int &h, int &m, int &s)
{
	cout<<"Hour: ";
	cin>>h;
	
	cout<<"Minute: ";
	cin>>m;
	
	cout<<"Second: ";
	cin>>s;
}
int checkTime(int gio, int phut, int giay)
{
		if( gio>24 || phut>60 || giay>60 || gio <=0 || phut <=0 || giay <=0 )  
			return 0;
		else
			return 1;
}
void output(int kq)	
{
	if (kq==0)
			cout<<"False!";
		else
			cout<< "True";
}


