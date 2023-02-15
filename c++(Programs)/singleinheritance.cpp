//program23
//class leader is derived from student	

#include <iostream>
#include <cstring>

using namespace std;

class student
{
	protected:
		char name[20];
		int id;
	public:
		student(const char c[], int n) : id(n)
		{
			strcpy(name, c);
		}
		void showdata()
		{
			cout<<"Name: "<<name<<endl
				<<"ID: "<<id<<endl;
		}
};

class leader : public student
{
	private:
		char union_name[20];
	public:
		leader(const char c[], int n, const char u[]) : student(c, n)
		{
			strcpy(union_name, u);
		}
		void showdata()
		{
			student::showdata(); /*calling base class function with ::*/
			cout<<"Union Name: "<<union_name<<endl;
		}
};

int main()
{
	leader l("Nishan Dhakal", 15, "FSU");
	
//	l.student::showdata();
	l.showdata();
	return 0;
}

