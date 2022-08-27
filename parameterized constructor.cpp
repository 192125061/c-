#include<iostream>
using namespace std;
class con{
	public:
		int age;
		string name;
		con(int a,string b){
			age=a;
			name=b;
		}
		void display()
		{
			cout<<"my name is "<<name<<"\n"<<"my age is "<<age<<"\n";
		}
};
int main()
{
	con ob1=con(18,"sathish");
	con ob2=con(53,"harish");
	ob1.display();
	ob2.display();
}
