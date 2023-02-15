#include<iostream>
#include<cstring>

using namespace std;
class university
{
	protected:
		char uni_name[30];
		char location[40];
	public:
		university(const char un[],const char lo[])
		{
			strcpy(uni_name,un);
			strcpy(location,lo);	
		}		
		void show()
		{
			cout<<"University name:"<<uni_name<<endl<<"location: "<<location<<endl;
		}
};
class affiliated:virtual public university
{
	protected:
			char name[30];
			char address[40];
			int p_no;
	public:
		affiliated(const char un[],const char lo[],const char n[],const char add[],int p):university(un,lo)
		{
			strcpy(name,n);
			strcpy(address,add);
			p_no=p;
			}	
		void show()
		{
			cout<<"affiliated college name:"<<name<<endl;
			cout<<"address:"<<address<<endl;
			cout<<"no of program:"<<p_no<<endl;
		}
};
class constituent:virtual public university
{
	protected:
		char name[30];
		char dean[30];
		int p_no;
	public:
		constituent(const char un[],const char lo[],const char na[],const char de[],int nop):university(un,lo)
		{
			strcpy(name,na);
			strcpy(dean,de);
			p_no=nop;
		}
		void show()
		{
			cout<<"school name:"<<name<<endl;
			cout<<"Dean name:"<<dean<<endl;
			cout<<"No. of program:"<<p_no<<endl;
		}
};
class student:public affiliated,public constituent
{
	private:
		char name[30];
		char program[20];
		int year;
	public:
		student(const char un[],const char loc[],const char n[],const char add[],int p,const char na[],const char de[],int nop,const char nam[],const char pro[],int y):university(un,loc),affiliated(un, loc, n,add,p),constituent(un, loc, na,de,nop)
		{
			strcpy(name,nam);
			strcpy(program,pro);
			year=y;
		}
		void show()
		{
			cout<<"name:"<<name<<endl<<"program:"<<program<<endl<<"Enrolled year:"<<year<<endl;
		}
		
};
int main()
{
	student s("pokhara university","pokhara","United technical college","Bharatpur, Chitwan",50,"school of engineering","Garima Paudel",40,"Nisha Pokharel","computer",2019);
		s.university::show();
		s.affiliated::show();
		s.constituent::show();
		s.show();
		return 0;
}
