#include<iostream>
#include<cstring>
 using namespace std;
 
 class employee
 {
 	private:
 		int code;
 		char name[30];
 		char address[40];
 		float salary;
 	public:
 		employee(){};
 		employee(int c,char n[],char add[],float s);
 		employee(employee &e);
 		void display();
 };
employee::employee(int c,char n[],char add[],float s)

 {
 	code=c;
 	strcpy(name,n);
 	strcpy(address,add);
 	salary=s;
 }
 employee::employee(employee &e)
 {
 	code=e.code;
 	strcpy(name,e.name);
 	strcpy(address,e.address);
 	salary=e.salary;
 	
 }
 void employee::display()
 {
 	cout<<"code="<<code<<endl<<"Name:"<<name<<endl<<"salary"<<salary<<endl;
 }
 int main()
 {
 	employee e1(25,"Nisha","Chitwan","2334.3");
 	
 	employee e2(e1);
 	cout<<"e1 object"<<endl;
 	e1.display();
 	cout<<"e2.object"<<endl;
 	e2.display();
 	return 0;
 }
