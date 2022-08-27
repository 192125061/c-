#include<iostream>
using namespace std;
class sample{
	public:
		int a,b,c;
		void getdata();
		void putdata();
};
void sample::getdata()
{
	cout<<"enter the two variable:";
	cin>>a>>b;
}
void sample::putdata(){
	cout<<"enter number is:"<<a<<b<<endl;
}
int main()
{
	sample s1;
	sample s2;
	sample s3;
	s1.getdata();
	s1.putdata();
	s2.getdata();
	s2.putdata();
	s3.getdata();
	s3.putdata();
}
