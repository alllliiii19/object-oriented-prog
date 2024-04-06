#include<iostream>

using namespace std;

class Coord
{
	private:
		int x;
		int y;
	public:
		int addcoord(int point1 ,int point2)
		{
			x=point1;
		    y=point2;
		}
		void getdata()
		{
			cout<<"Enter x coord= ";cin>>x;
			cout<<"Enter y coord = ";cin>>y;
		}
		int dispcoord()
		{
			cout<<x + x;
		}
};
int main()
{
	Coord p1,p2;
	
	p1.getdata();
	p2.getdata();
	
	cout<<"newp = ";p1.dispcoord() + p2.dispcoord(); 
	
	return 0;
}
