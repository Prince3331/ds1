#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
class insert
{
	int n,a[10];
public:
	void get();
	void sort();
	void display();
};
void insert::get()
{
	cout<<"\n Enter Range:";
	cin>>n;
	cout<<"\n Ele are:";
	for(int i=1;i<=n;i++)
	  cin>>a[i];
}
void insert::sort()
{
	for(int i=1;i<=n;i++)
	{
	   int key=a[i];
	   int j=i-1;
	   while(j>=0&&a[j]>key)
	   {
	     a[j+1]=a[j];
	     j=j-1;
	   }
	   a[j+1]=key;
	}
}
void insert::display()
{
	cout<<"\n Sorted element using Insertion Sort:\n\t";
	for(int i=1;i<=n;i++)
	 cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	insert h;
	h.get();
	h.sort();
	h.display();
	getch();
}
