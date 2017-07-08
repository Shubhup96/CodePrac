#include "iostream"
#include <unistd.h>
using namespace std;
int main()
{
int row,col,i,j,rowbel,rytend,lftend,rowabv;

cout<<"ENTER THE MATRIX ROW\n";
cin>>row;
cout<<"ENTER THE MATRIX COL\n";
cin>>col;

lftend=0,rowabv=0;
rowbel=row;
rytend=col;
--rowbel;
--rytend;

int mat[row][col];

cout<<"ENTER ELEMENTS\n";
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		cin>>mat[i][j];
	}
}

cout<<"MATRIX:\n";
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		cout<<mat[i][j]<<"\t";
	}
cout<<"\n";
}
cout<<"\n";

i=lftend;
j=rowabv;

l1:

for(;j<=rytend;j++)
cout<<mat[i][j]<<"\t";
cout<<endl;
i++;
--j;
--rytend;
rowabv++;

if(lftend==(rytend+1) && rowabv==(rowbel+1))
goto l2;

sleep(1);

for(;i<=rowbel;i++)
cout<<mat[i][j]<<"\t";
cout<<endl;
--rowbel;
--j;
--i;

if(lftend==(rytend+1) && rowabv==(rowbel+1))
goto l2;

sleep(1);

for(;j>=lftend;j--)
cout<<mat[i][j]<<"\t";
cout<<endl;
j++;
--i;
lftend++;

if(lftend==(rytend+1) || rowabv==(rowbel+1))
goto l2;

sleep(1);

for(;i>=rowabv;i--)
cout<<mat[i][j]<<"\t";
cout<<endl;
i++;
j++;

if(lftend==(rytend+1) || rowabv==(rowbel+1))
goto l2;

sleep(1);

if(lftend==(rytend+1) || rowabv==(rowbel+1))
goto l2;
goto l1;

l2:
return 0;
}
