#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],i,min_index,j,n,temp,max_index;
public:
	void get();
	void asc_sort();
	void dsc_sort();
	void disp();
};
void demo::get()
{
	cout<<"\n enter the array size:";
	cin>>n;
	cout<<"\n enter the array ele:";
	for(i=1;i<=n;i++)
	cin>>a[i] ;
}
void demo::asc_sort()
{
	for(i=1;i<=n-1;i++)
	{
	  min_index=i;
	  for(j=i+1;j<=n;j++)
	  {
	     if(a[j]<a[min_index])
	     min_index=j;
	  }
	  if(min_index!=i)
	  {
	     temp=a[min_index];
	     a[min_index]=a[i];
	     a[i]=temp;
	  }
	}
}
void demo::dsc_sort()
{
	for(i=1;i<=n;i++)
	{
	  max_index=i;
	  for(j=i+1;j<=n;j++)
	  {
	     if(a[j]>a[max_index])
	     max_index=j;
	  }
	  if(max_index!=i)
	  {
	     temp=a[max_index];
	     a[max_index]=a[i];
	     a[i]=temp;
	  }
	}
}
void demo::disp()
{
	cout<<"\n The array ele are:";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	demo d;
	d.get();
	d.disp();
	d.asc_sort();
	cout<<"\n After asc sort:";
	d.disp();
	d.dsc_sort();
	cout<<"\n After dsc sort:";
	d.disp();
	getch();
}


