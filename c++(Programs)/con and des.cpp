//Program to illustrate constructor and destructor	
#include <iostream>

using namespace std;

class Test
{
	private:
		static int count;
	public:
		Test() //default constructor
		{
			++count;
			cout << "Constructor is calling for object: " << count << endl;
		}
		
		~Test() //destructor
		{
			cout << "Destructor is calling for Object: " << count << endl;
			--count;
		}
};

int Test::count = 0;

int main()
{
	Test t1;
	Test t2;
	Test t3;
	Test t4;
	
	cout<<"\n----------------------------------\n\n";
	
	return 0;
}


