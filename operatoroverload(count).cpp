#include<iostream>

using namespace std;

class Counter
{
	private:
		unsigned int count;
	public:
		Counter(): count(0)
		{ }
		Counter(int c): count(c)
		{ }
		unsigned  int get_count()
		{
			return count;
		}
		
		Counter operator ++ ()
		{
			//++count;
			//Counter temp;
			//temp.count=count;
			//return temp;
			    //or
			return Counter(++count);
		}
		Counter operator ++ (int)
		{
			return Counter(count++);
		}
};

int main()
{
	Counter c1,c2;
	
	cout<<"c1= "<<c1.get_count();
	cout<<endl;
	cout<<"c2= "<<c2.get_count();
	cout<<endl;
	
	++c1;
	c2=++c1;
	
	cout<<"c1 = "<<c1.get_count();
	cout<<endl;
	cout<<"c2 = "<<c2.get_count();
	cout<<endl;
	
	c2=c1++;
	
	
	cout<<"c1 = "<<c1.get_count();
	cout<<endl;
	cout<<"c2 = "<<c2.get_count();
	
	
    return 0;
}
