/*addition of two times
passing objects as function arguments*/
#include <iostream>
using namespace std;
class Time
{
	private:
	int hh;
	int mm;
	int ss;
	public:
		void setTime(int h, int m, int s)
		{
			hh = h;
			mm = m;
			ss = s;
		}
		void showTime()
		{
			cout << hh << " : " << mm << " : " << ss;
		}
		void addTime(Time, Time);
};
void Time::addTime(Time t1, Time t2)
{
		ss = t1.ss + t2.ss;
		mm = t1.mm + t2.mm;
		hh = t1.hh + t2.hh;
		while (ss >= 60)
		{
			++mm;
			ss -= 60;
		}
		while (mm >= 60)
		{
			++hh;
			mm -= 60;
		}
}
int main()
{
		Time t1, t2, t3;
			
		t1.setTime(1, 50, 45);
		t2.setTime(5, 15, 20);
		t3.addTime(t1, t2);
		t1.showTime();
		cout << " + ";
		t2.showTime();
		cout << " = ";
		t3.showTime();
	
		return 0;
}
