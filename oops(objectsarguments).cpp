#include<iostream>

using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0),inches(0)
		{ }
		
		Distance(int ft,float in) : feet(ft),inches(in)
		{}
		
		void getdist()
		{
			cout<<"Enter feets =  ";
			cin>>feet;
			cout<<"Enter inches =  ";
			cin>>inches;
			cout<<endl;
		}
		
		void dispdist()
		{
			cout<< feet <<"  feets  " <<inches<<"  inches ";
		}
		void add_dist(Distance ,Distance);
};
	void Distance::add_dist(Distance d1, Distance d2)
    {
	inches=d1.inches + d2.inches;
	feet = 0;
	if(inches >= 12.0)
	{
		inches -=12.0;
		feet++;
	}
	feet += d1.feet + d2.feet;
    }
int main()
{
	Distance d1,d3;
	Distance d2(4,5.54);
	
	d1.getdist();
	d3.add_dist(d1,d2);
	
	cout<<"d1 =  ";d1.dispdist();
	cout<<endl;
	cout<<"d2=  ";d2.dispdist();
	cout<<endl;
	cout<<"d3 =  ";d3.dispdist();
	cout<<endl;
	
	return 0;
}

