#include<iostream>
using namespace std;
class time
{
	private:
		int hrs;
		int min;
		int sec;
	public:
		time(){}
		time(int hr,int mm,int s):hrs(hr),min(mm),sec(s){}
		void display()
		{
			cout<<hrs<<"hrs"<<min<<"min"<<sec<<"sec";
		}
		time operator +(time t)
		{
			time temp;
			temp.hrs=hrs+t.hrs;
			temp.min=min+t.min;
			temp.sec=sec+t.sec;
			
			while(temp.sec>=60)
			{
				++temp.min;
				temp.sec-=60;
			}
			while(temp.min>=60)
			{
				++temp.hrs;
				temp.min-=60;
			}
			
			return temp;
		}
};
int main()
{
	time t1(5,20,60),t2(3,30,10),t3;
	t3=t1+t2;
	t1.display();
	cout<<" + ";
	t2.display();
	cout<<"=";
	t3.display();
	return 0;
}
