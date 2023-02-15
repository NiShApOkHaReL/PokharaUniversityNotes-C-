//multiple inheritance with ambiguity resolution
#include <iostream>

using namespace std;

class B1
{
	protected:
		int a;
	public:
		B1(int n) : a(n){}
		
		void displayB()
		{
			cout<<"a = "<<a<<endl;
		}
};

class B2
{
	protected:
		int b;
	public:
		B2(int n) : b(n){}
		
		void displayB()
		{
			cout<<"b = "<<b<<endl;
		}
};

class D : public B1, public B2
{
	private:
		int prod;
	public:
		D(int n1, int n2) : B1(n1), B2(n2)
		{
			prod = a * b;
		}
		
		void display()
		{
		//	B1::display();
		//	B2::display();
			
			cout<<"a * b = "<<prod<<endl;
		}
};

int main()
{
	D d(5, 10);
	
	d.B1::displayB();
	d.B2::displayB();
	d.display();
	
	return 0;
}

