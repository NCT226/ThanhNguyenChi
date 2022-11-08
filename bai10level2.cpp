# include <iostream>
using namespace std;
void input(int &h, int &m, int &s);
void second(int &s, int &m);
void minute(int &m, int &h);
void hour(int &h);
void output(int h, int m, int s);
int main()
{
	int h,m,s;
	input(h,m,s);
	second(s,m);
	minute(m,h);
	output(h,m,s);
	
}

void input(int &h, int &m, int &s)
{
	cout<<"Hour";
	cin>>h;
	cout<<"Minute";
	cin>>m;
	cout<<"Second";
	cin>>s;
}

void second(int &s, int &m)
{
	s+=1;
	int giay=s;
	if (s==60)
	{
		s%=60;
		m=m+(giay/60);
	}
	if (s>60)
	{
		s%=60;
		m=m+(giay/60);
    }  		
}

void minute(int &m, int &h)
{
	int phut=m;
	if (m==60)
	{
		m%=60;
		h=h+(phut/60);
	}
	if (m>60)
	{
		m%=60;
		h=h+(phut/60);
    }  	
}

void hour(int &h)
{
	if(h==24)
		h=0;
}

void output(int h, int m, int s)
{
	cout<<"Time after 1 second: ";
	cout<<h<<"gio "<<m<<"phut "<<s<<"giay";
}
