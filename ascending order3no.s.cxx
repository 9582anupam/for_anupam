# include <iostream>
using namespace std;
int main()
{
	int s,m,l,a,b,c;
	cout<<"enter the numbers"<<endl;;
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		l=a;
		if(b>c)
		{
			m=b;
			s=c;
		}
		else
		{
			m=c;
			s=b;
		}
	}
	else if(b>a&&b>c)
	{
		l=b;
		if(a>c)
		{
			m=a;
			s=c;
		}
		else
		{
			m=c;
			s=a;
		}
	}
	else if(c>a&&c>b)
	{
		l=c;
		if(a>b)
		{
			m=a;
			s=b;
		}
		else
		{
			m=b;
			s=a;
		}
	}
	else if(a==b)
	{
		if(c>a)
		{
			l=c;
			s=a;
			m=b;
		}
		else;
		{
			l=a;
			m=b;
			s=c;
		}
	}
	else if(b==c)
	{
		if(a>b)
		{	
		    l=a;
			s=c;
			m=b;
		}
		else;
		{
			l=b;
			m=c;
			s=a;
		}
	}
	else if(a==c)
	{
		if(b>c)
		{
			l=c;
			s=a;
			m=b;
		}
		else;
		{
			l=a;
			m=c;
			s=b;
		}
	}
	cout<<s<<' '<<m<<' '<<l;
}