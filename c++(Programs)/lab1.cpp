
//class and Object
//Account class
#include <iostream>
#include <cstring>

using namespace std;
class Account
{
		private:
			long acc_no;
		char name[30];
			char type[20];
			double balance;
		public:
			void setdata();
			void setAccount(long,const char[],const char[], double);
			void showdata();
			double deposit(double);
			double withdraw(double);
};
void Account::setAccount(long an,const char n[],const char t[], double b)
{
		acc_no = an;
		strcpy(name, n);
		strcpy(type, t);
		balance = b;
}
void Account::setdata()
{
		cout << "Account Number? ";
		cin >> acc_no;
		cout << "Account Holder Name? ";
		cin >> name;
		cout << "Account Type? ";
		cin >> type;
		cout << "Available Balance? ";
		cin >> balance;
}
void Account::showdata()
{
		cout << "Account#: " << acc_no << endl;
		cout << "Name: " << name << endl;
		cout << "Type: " << type << endl;
		cout << "Available balance: " << balance << endl;
}
double Account::deposit(double x)
{
		balance += x;
		return balance;
}
double Account::withdraw(double x)
{
		if (balance >= x)
			balance -= x;
		else
			cout << "Insufficient Balance." << endl;
			return balance;
}
int main()
{
			Account a1;

		a1.setdata();
		a1.showdata();
		cout << "Enter amount to be deposited: ";
			double x;
		cin >> x;
		cout << "After Deposit: " <<a1.deposit(x) << endl;
		cout << "Enter amount to be withdrawn: ";
		cin >> x;
		cout << "After Withdrawl: " <<a1.withdraw(x) << endl;
		cout << "------------------------"<<endl;
			Account a2;
		a2.setAccount(1257003, "Garima", "Current", 48500.75);
		a2.showdata();

		return 0;
}
