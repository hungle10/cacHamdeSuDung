#include<iostream>
using namespace std;
bool hopLe(int d,int m,int y);
bool laNamNhuan(int y);
int soNgayTrongThang(int m,int y);
void tinhNgayTiepTheo(int d,int m,int y,int &d1,int &m1,int &y1);
void xuat(int d1,int m1,int y1);
int main()
{
	int d,m,y,d1,m1,y1;
	cin>>d>>m>>y;
	if(hopLe(d,m,y))
	{tinhNgayTiepTheo(d,m,y,d1,m1,y1);
    xuat(d1,m1,y1);
    }
    else
    cout<<-1;
}
bool hopLe(int d,int m,int y)
{
	if(d>0&&m>0&&y>0&&m<=12&&d<=soNgayTrongThang(m,y))
	    return true;
	else
	    return false;
}
bool laNamNhuan(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
	    return true;
	return false;
}
int soNgayTrongThang(int m,int y)
{
	if(m==4||m==6||m==9||m==11)
	   return 30;
	else if(m==2)
	   if(laNamNhuan(y))
	       return 29;
	    else 
	       return 28;
	else
	    return 31;
}
void tinhNgayTiepTheo(int d,int m,int y,int &d1,int &m1,int &y1)
{
	if(hopLe(d,m,y))
	{
		d1=d;
		m1=m;
		y1=y;
		if(d1<soNgayTrongThang(y,m))
		    d1++;
		else
		    {
		      d1=1;
		      if(m1<12)
		         m1++;
		        else
		            {
		            	m1=1;
		            	y1++;
		            }
		    }
	}
}
void xuat(int d1,int m1,int y1)
{
	cout<<d1<<" "<<m1<<" "<<y1;
}

