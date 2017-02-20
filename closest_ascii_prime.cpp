#include "iostream"
#include <stdio.h>
#include <string.h>
using namespace std;

void show(char str[])
{

cout<<"OUTPUT STRING:\t";

int i,j,x,f,b,flago=0,flagf=0,flagb=0;
char p;

for(i=0;str[i]!='\0';i++)
{
j=str[i];

for(x=2;x<=(j/2);x++)
{

if(j%x==0)
{flago=1;	break;}

}

if(flago==0)
{
p=j;
cout<<p;
}
else
{

f=++j;
--j;
b=--j;
++j;

outer:

for(x=2;x<=(f/2);x++)
{

if(f%x==0){flagf=1;}
if(b%x==0){flagb=1;}

if(flagf==1 && flagb==1)
{
f++,b--; 
flagf=flagb=0;
goto outer;
}

if((flagf==0 && x==(f/2))||(flagb==0 && x==(b/2)))
{break;}

}

if(flagf==0)
{p=f;cout<<p;}
else if(flagb==0){p=b;cout<<p;}

}

flagf=flagb=flago=b=f=0;
}

}

int main()
{
char str[20];
cout<<"ENTER STRING:\t";
cin>>str;
cout<<endl;
show(str);
return 0;
}
