//sorting using function template
#include<iostream>

using namespace std;
const int n=5;
template<class T>
void Sort(T a[])
{
	T temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
template<class T>
void display(T a[])
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
}
int main()
{
	int i[]={5,4,0,10,2};
	float f[]={1.25,3.4,-2,7.5,8.75};
	char c[]={'a','8','@','A','*'};
	
	cout<<"Before Sorting:\n";
	display(i);
	Sort(i);
	cout<<"After Sorting:\n";
	display(i);
	
	cout<<"\nBefore Sorting:\n";
	display(f);
	Sort(f);
	cout<<"After Sorting:\n";
	display(f);
	
	cout<<"\nBefore Sorting:\n";
	display(c);
	Sort(c);
	cout<<"After Sorting:\n";
	display(c);
	
	
	return 0;
}
	
