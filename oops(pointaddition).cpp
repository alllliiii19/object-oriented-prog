#include<iostream>

using namespace std;

class Coord
{
	private:
		int x_coord;
		int y_coord;
	public:
		Coord(): x_coord(0),y_coord(0)
		{ }
		Coord(int x, int y) :x_coord(x), y_coord(y)
		{ }
		void getdist()
		{
			cout<<"Enter X coordinate = "; cin>>x_coord;
			cout<<"Enter Y coordinate = "; cin>>y_coord;
			cout<<endl;
		}
		void dispcoord()
		{
			cout<<x_coord<<" ' "<<y_coord;
		}
		void add_coord(Coord, Coord);
};

void Coord::add_coord(Coord p1, Coord p2)
{
	x_coord= p1.x_coord + p2.x_coord;
	y_coord= p1.y_coord + p2.y_coord;	
}

int main()
{
	Coord p1,p2,p3;
	p1.getdist();
	p2.getdist();
	p3.add_coord(p1,p2);
	
	
	cout<<"p1 =  ";p1.dispcoord();
	cout<<endl;
	cout<<"p2=  ";p2.dispcoord();
	cout<<endl;
	cout<<"p3 =  ";p3.dispcoord();
	cout<<endl;
	
}


