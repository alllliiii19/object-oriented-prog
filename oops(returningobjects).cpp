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
		Distance add_dist(Distance );
};
	Distance Distance::add_dist(Distance d2)
    {
    Distance temp;
	temp.inches=inches + d2.inches;
	if(temp.inches >= 12.0)
	{
		inches -=12.0;
		feet++;
	}
	temp.feet += feet + d2.feet;
	
	return temp;
    }
int main()
{
	Distance d1,d3;
	Distance d2(3,5);
	
	d1.getdist();
	d3=d1.add_dist(d2);
	
	cout<<"d1 =  ";d1.dispdist();
	cout<<endl;
	cout<<"d2=  ";d2.dispdist();
	cout<<endl;
	cout<<"d3 =  ";d3.dispdist();
	cout<<endl;
	
	return 0;
}

