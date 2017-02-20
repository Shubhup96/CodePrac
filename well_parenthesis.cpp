#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//char stack[100];

int check(char str[])
{

int i=0,j=0,k=0;
int flag=0;
int oc=0,cc=0;

while(str[i]!='\0')
{
	if(str[i]=='('||str[i]=='{'||str[i]=='['){	
	++oc;
	}else if(str[i]==')'||str[i]=='}'||str[i]==']'){	
	++cc;
	}		
i++;
}

i=0;
if(oc==cc)
{

while(str[i]!='\0')
{

	if(str[i]=='(')
	{
	j=i;
		while(str[j]!=')')
		{
			j++;
			if(str[j]=='\0')
			{
			return 0;
			}
			
			if(str[j]=='{')
			{
			k=j;
				while(str[k]!='}')
				{
				k++;
				if(str[k]==')')
				{
				return 0;
				}				
				}
			}
			
			if(str[j]=='[')
			{
			k=j;
				while(str[k]!=']')
				{
				k++;
				if(str[k]==')')
				{
				return 0;
				}				
				}
			}
			
		}
	flag=1;
	}	
	else if(str[i]=='{')
	{
	j=i;
		while(str[j]!='}')
		{
			j++;
			if(str[j]=='\0')
			{
			return 0;
			}
			
			if(str[j]=='(')
			{
			k=j;
				while(str[k]!=')')
				{
				k++;
				if(str[k]=='}')
				{
				return 0;
				}				
				}
			}
			if(str[j]=='[')
			{
			k=j;
				while(str[k]!=']')
				{
				k++;
				if(str[k]=='}')
				{
				return 0;
				}				
				}
			}
			
		}
	flag=1;
	}		
	else if(str[i]=='[')
	{
	j=i;
		while(str[j]!=']')
		{
			j++;
			if(str[j]=='\0')
			{
			return 0;
			}
			
			if(str[j]=='{')
			{
			k=j;
				while(str[k]!='}')
				{
				k++;
				if(str[k]==']')
				{
				return 0;
				}				
				}
			}
			if(str[j]=='(')
			{
			k=j;
				while(str[k]!=')')
				{
				k++;
				if(str[k]==']')
				{
				return 0;
				}				
				}
			}
			
		}
	flag=1;
	}
	else if(str[i]==')' && flag==0||str[i]=='}' && flag==0||str[i]==']' && flag==0)
	{
	return 0;
	}

i++;
}
return 1;

}
else
return 0;

}

int main()
{
char str[20];

cout<<"ENTER STRING"<<endl;
cin>>str;
cout<<endl;

int res=check(str);
if(res==0)
	cout<<"UNBALANCED"<<endl;
else
	cout<<"WELL BALANCED STRING"<<endl;

return 0;
}
