#include<iostream>

using namespace std;

class Counter
{
	protected:
		unsigned int count;
	public:
		Counter(): count(0)
		{ }
		Counter(int c):count(c)
		{ }
		unsigned int get_count() const
		{
			return count;
		}
		Counter operator ++ ()
		{
			return Counter(++count);
		}
};
class Countdn: public Counter
{
	public:
	Counter operator -- ()
		{
			return Counter(--count);
		}
};

int main()
{
	Countdn c1;
	cout<<"c1 = "<<c1.get_count();
	cout<<endl;
	++c1;
	++c1;
	cout<<"c1 = "<<c1.get_count();
	cout<<endl;
	--c1;
	cout<<"c1 = "<<c1.get_count();
	cout<<endl;
	--c1;
	cout<<"c1 = "<<c1.get_count();
	
	return 0;
	
	
}
