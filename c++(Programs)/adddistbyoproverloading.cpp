#include<iostream>
using namespace std;

class distance
{
	private:
		int feet;
		int inch;
	public:
		distance(){}
		distance(int f,int i):feet(f),inch(i){}
		void show()
		{
			cout<<feet<<"feet"<<inch<<"inch";
		}
		distance operator+(distance d)
		{
			distance temp;
			temp.feet=feet+d.feet;
			temp.inch=inch+d.inch;
		
			while(temp.inch>=12)
			{
				++temp.feet;
				temp.inch-=12;
			}
			return temp;
		}
};
int main()
{
	distance d1(4,13),d2(2,4),d3;
	d3=d1+d2;
	d1.show();
	cout<<"+";
	d2.show();
	cout<<"=";
	d3.show();
	return 0;
}
		

