#include "iostream"
using namespace std;

int main()
{
int mat[50],size,i,sum=0,max=0;
cout<<"Enter matrix size:"<<endl;
cin>>size;
cout<<endl;

cout<<"Enter matrix elements:\n";
for(i=0;i<(size*size);i++)
{
cin>>mat[i];
}

cout<<"Entered matrix:\n";
for(i=0;i<(size*size);i++)
{
cout<<mat[i]<<"\t";
if(i==5||i==11||i==17||i==23||i==29||i==35)//LOL
{
cout<<"\n";
}
}

for(i=0;i<(size*size);)
{

for(int j=0;j<=3;j++)
{
sum=mat[i]+mat[i+1]+mat[i+2]+mat[i+7]+mat[i+12]+mat[i+13]+mat[i+14];
cout<<"INTERMEDIATE SUM: "<<sum<<endl;

if(max<sum)
max=sum;

i++;
}

if((size*size)==(i+14))
break;

i+=2;
}
cout<<"Max sum of Z pattern elements in matrix: "<<max<<endl;
return 0;
}
