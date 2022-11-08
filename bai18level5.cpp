# include<iostream>
# include<math.h>
using namespace std;
int tinhSoNgayTrongNam(int d, int m, int y);
int tinhSoNgayTrongThang(int d, int m, int y);
int tinhKhoangCachSoVoiNgayDauNamSau(int d, int m, int y);
void input(int &d, int &m, int &y);
void output(int khoangCach);
bool laNamNhuan(int y);
int main()
{
	int d,m,y;
	input(d,m,y);
	int khoangCach=tinhKhoangCachSoVoiNgayDauNamSau(d,m,y);
	output(khoangCach);
	return 0;
}
int tinhSoNgayTrongNam(int d, int m, int y)
{
	int soNgay=d;
	for(int i=1;i<m;i++)
		soNgay=soNgay+tinhSoNgayTrongThang(d,i,y);
	return soNgay;
}

int tinhSoNgayTrongThang(int d, int m, int y)
{
	if(m==2)
	{
		if(laNamNhuan(y))
			return 29;
		else
			return 28;
	}
	else  
	{
		if( m==4|| m==6 || m==9|| m==11 )
			return 30;
		else
			return 31;
	}
}

int tinhKhoangCachSoVoiNgayDauNamSau(int d,int m, int y)
{
	int kc=tinhSoNgayTrongNam(d,m,y);
	if (laNamNhuan)
		kc=366-kc;
	else
		kc=365-kc;
	return kc;
}
bool laNamNhuan(int y)
{
	if((y%4==0 && y%100!=0) || (y%400==0))
		return true;
	return false;
}
void input(int &d, int &m, int &y)
{
	cin>>d>>m>>y;
}

void output(int khoangCach)
{
	cout<<khoangCach;
}
