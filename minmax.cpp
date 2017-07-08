#include <iostream>
using namespace std;

int main(){
    long int num[5];
    long int minsum=0,maxsum=0,sum=0;
    
    for(int i=0;i<=4;i++)
        cin>>num[i];
   
        for(int i=0;i<=4;i++)
        {
            for(int j=0;j<=4;j++)
            {
                if(j!=i)
                {
                    sum=sum+num[j];
                }
            }
            
            if(minsum==0 && maxsum==0)
            {
                minsum=sum;
                maxsum=sum;
            }
            if(sum<minsum)
                minsum=sum;
            if(sum>maxsum)
                maxsum=sum;            
            
            sum=0;            
        }
    
    cout<<minsum<<" "<<maxsum<<endl;
    
    return 0;
}
