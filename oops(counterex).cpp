#include<iostream>

using namespace std;

class Counter
{
	private:
		unsigned int count;
	public:
		Counter() : count(0)
		{}
		int getdata()
		{
			return count;
		}
		void inc_count()
		{
			count++;
		}
};
int main()
{
	Counter c1,c2;
	
	cout<<"c1 = "<<c1.getdata();
	cout<<endl;
	cout<<"c2 = "<<c2.getdata();
	cout<<endl;
	c1.inc_count();
	c2.inc_count();
	
	cout<<"c1 = "<<c1.getdata();
	cout<<endl;
	cout<<"c2 = "<<c2.getdata();
	cout<<endl;
	
	return 0;
}
