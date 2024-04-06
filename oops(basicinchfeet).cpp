#include<iostream>

using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	public:
		void setdata(int ft, float inc )
		{
			feet=ft;
			inches=inc;
		}
		void getdata()
		{
			cout<<"Enter no. of feets = ";cin>>feet;
			cout<<"Enter no of inches = ";cin>>inches;
		}
		void dispdist()
		{
			cout<<feet<<" feets "<<inches<<" inches ";
		}
};

int main()
{
	Distance d1,d2;
	
	d1.setdata(4,5.5);
	d2.getdata();
	
	cout<<"d1 = ";d1.dispdist();
	cout<<endl;
	cout<<"d2= ";d2.dispdist();
	cout<<endl;
	
	return 0;
}
