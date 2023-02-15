//friend function: swapping private data of two classes
#include <iostream>

using namespace std;
class ABC;
class XYZ
{
	private:
			int value;
	public:
			void setdata(int);
			void showdata();
			friend void swap(ABC &, XYZ &);
};
class ABC
{
	private:
			int value;
	public:
			void setdata(int);
			void showdata();
			friend void swap(ABC &, XYZ &);
};
void XYZ::setdata(int n)
	{
		value = n;
	}
		void XYZ::showdata()
	{
		cout << value << endl;
	}
void ABC::setdata(int n)
	{
		value = n;
	}
void ABC::showdata()
	{
		cout << value << endl;
	}
void swap(ABC &abc, XYZ &xyz)
	{
		int temp = abc.value;
		abc.value = xyz.value;
		xyz.value = temp;
	}
int main()
{
			ABC a;
			XYZ x;

			a.setdata(10);
			x.setdata(20);
		cout<<"\nValues before swapping\nABC value= ";
			a.showdata();
		cout<<"XYZ value= ";
			x.showdata();
			swap(a, x); //friend function
		cout<<"\nValues after swapping\nABC value= ";
			a.showdata();
		cout<<"XYZ value= ";
			x.showdata();

		return 0;
}
