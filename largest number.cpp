#include<iostream>
using namespace std;
void large(int *x,int *y,int *z,int *lar)
{
	if(*x>*y && *x>*z)
	{
		*lar=*x;
	}
	else if(*y>*x && *y>*z)
	{
		*lar=*y;
	}
	else if(*z>*x && *z>*y)
	{
		*lar=*z;
	}
}
int main()
{
	int a,b,c,lar=0;
	cout<<"enter the three numbers: ";
	cin>>a>>b>>c;
	large(&a,&b,&c,&lar);
	cout<<"the largest number is "<<lar;
}
