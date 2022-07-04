#include<iostream.h>
#include<conio.h>
#include<process.h>
class demo
{
	int a[10],i,j,n,item,k;
	public:
	      void get();
	      void insert();
	      void del();
	      void dis();

};
 void demo::get()
 {
 cout<<"\Enter n";
 cin>>n;
 cout<<"\n Enter Array Elements:";
 for(i=1;i<=n;i++)
 cin>>a[i];
}
void demo::insert()
{
cout<<"\n Enter Position :";
cin>>k;
cout<<"\n Enter Item:";
cin>>item;
j=n;
while(j>=k)
{
a[j+1]=a[j];
j--;
}
a[k]=item;
n++;
}
void demo::del()
{
cout<<"\n Enter Position;";
cin>>k;
j=k;
while(j<=n-1)
{
a[j]=a[j+1];
j++;
}
n--;
}
void demo::dis()
{
cout<<"\n Elements are \n";
for(i=1;i<=n;i++)
cout<<a[i]<<"\t";
}



void main()
{
clrscr();
demo d;
int ch;
d.get();
cout<<"\n1. Insert 2.Del 3.Dis 4. Exit \n";
while(ch!=4)
{
cout<<"\n Enter choice";
cin>>ch;
switch(ch)
{
    case 1:d.insert();break;
    case 2:d.del();break;
    case 3:d.dis();break;
    case 4:exit(0);
    }
}
getch();
}