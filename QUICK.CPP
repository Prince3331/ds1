#include<iostream.h>
#include<conio.h>
#include<string.h>
class demo
{
	int x[20],n;
	public:
	void get();
	void asort(int,int);
	void dsort(int,int);
	int partition(int,int);
	int partition2(int,int);
	void disp();
};
void demo::get()
{
	cout<<"\n Enter the array size:";
	cin>>n;
	cout<<"\n Enter the array ele:";
	for(int i=1;i<=n;i++)
	cin>>x[i];
	asort(1,n);
	dsort(1,n);
}
void demo::asort(int p,int q)
{
	if(p<q)
	{
		int j=partition(p,q);
		asort(p,j-1);
		asort(j+1,q);
	}
}
void demo::dsort(int p,int q)
{
	if(p<q)
	{
		int k=partition2(p,q);
		asort(p,k-1);
		asort(k+1,q);
	}
}

int demo::partition(int lb,int ub)
{
	int a,left,right,temp;
	a=x[lb];
	left=lb+1;
	right=ub;
	do
	{
		while(x[left]<a)
		left++;
		while(x[right]>a)
		right--;
		if(left<right)
		{
			temp=x[left];
			x[left]=x[right];
			x[right]=temp;
		}
	}
		while(left<=right);
		x[lb]=x[right];
		x[right]=a;
		return(right);
}
int demo::partition2(int lb,int ub)
{
	int a,left,right,temp;
	a=x[lb];
	left=lb+1;
	right=ub;
	do
	{
		while(x[left]>a)
		left++;
		while(x[right]<a)
		right--;
		if(left<right)
		{
			temp=x[left];
			x[left]=x[right];
			x[right]=temp;
		}
	}
		while(left<=right);
		x[lb]=x[right];
		x[right]=a;
		return(right);
}

void demo::disp()
{
	cout<<"\n The array ele are:";
	for(int i=1;i<=n;i++)
	cout<<x[i]<<"\t";
}
void main()
{
	clrscr();
	demo d;
	d.get();
	cout<<"\n After ascending sort";
	d.disp();
	getch();
}