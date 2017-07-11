#include <iostream>
using namespace std;
class Test
{
	private:
		int num;
	public:
		int getnum()
		{
			return num;
		}
		Test(int n)
		{
			num=n;
		}
		~Test()
		{
			cout<<"Test died"<<endl;OB
		}
};
int main()
{
   cout<<"test"<<endl;
   Test t1(12);
   cout<<t1.getnum()<<endl;
   

}
