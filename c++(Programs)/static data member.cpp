//static data and function example
#include <iostream>

using namespace std;

class Part
{
	private:
		int pid;
		static int count;/*static data*/
	public:
		void setdata()
		{
			pid = ++ count;
		}
		static int getcount()/*static function*/
		{
			return count;
		}
		void showid()
		{
			cout << "ID: " << pid << endl;
				
		}
};

int Part::count; /*int Part::count = 0;*/

int main()
{
	/*cout<<"\nCount is: "<<Part::getcount()<<endl;/*can be called before object creation*/
	
	Part p1, p2;/*initialized to zero for the first object creation*/
	
	//cout<<"\nCount is: "<<Part::getcount()<<endl;
	
	p1.setdata();
	p2.setdata();
	
	p1.showid();
	p2.showid();
	
	cout<<"\nCount is: "<<Part::getcount()<<endl;
	
	Part p3;
	
	p3.setdata();
	
	p3.showid();
	
	cout<<"\nCount is: "<<Part::getcount()<<endl;
	
	return 0;
}


