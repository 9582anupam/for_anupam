# include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number"<<endl;
	cin>>n;
	int i=1;
	int f=1;
	while(i<=n)
	{
		f*=i;
		i++;
	}
	cout<<f;
}