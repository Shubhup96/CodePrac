#include<iostream>
using namespace std;

int main()	{

char a[10];
cin>>a;

for(int i=0;a[i]!='\0';i++)	{
	if(a[i]>=65 && a[i]<91)	a[i]+=32;
	else if(a[i]>=97 && a[i]<123)	a[i]-=32;
}

cout<<a;

return 0;
}
