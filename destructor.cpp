#include<iostream>
using namespace std;
class destructor{
	public:
		destructor(){
			cout<<"constructor invoked\n";
		}
		~destructor(){
			cout<<"destructor invoked";
		}
};
int main()
{
	destructor ob1;
}
