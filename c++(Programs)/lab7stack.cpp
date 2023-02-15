//Stack Implementation: example of class template
#include<iostream>


using namespace std;

const int N=10;

template<class T>
class Stack
{
	private:
		T s[N];
		int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(T data)
		{
			top++;
			if(top>=N)
			{
				cout<<"\nStack Overflow.";
				exit(1);
			}
			s[top]=data;	
		}
		T pop()
		{
			if(top<0)
			{
				cout<<"\nStack Underflow.";
				exit(1);
			}
			return s[top--];
		}
		void display()
		{
			for(int i=0;i<=top;i++)
				cout<<s[i]<<"\t";
			cout<<endl;
		}
		
};
int main()
{
	Stack<char> s1;
	
	s1.push('A');
	s1.push('@');
	s1.push('Z');
	
	cout<<"\nElements in Stack: ";
	s1.display();
	
	cout<<s1.pop()<<" is popped.\n";
	cout<<s1.pop()<<" is popped.\n";
	
	cout<<"\nElements in Stack: ";
	s1.display();
	
	Stack<int> s2;

	s2.push(1);
	s2.push(5);
	s2.push(10);
	
	cout<<"\nElements in Stack: ";
	s2.display();
	
	cout<<s2.pop()<<" is popped.\n";
	cout<<s2.pop()<<" is popped.\n";
	
	cout<<"\nElements in Stack: ";
	s2.display();
	
	return 0;
}
