#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,c[10000],n,i,j,k,l=1,f;
    cin>>a;
    c[0]=2;
    c[1]=3;
    for(i=0;i<a;i++)
        
     { 
        cin>>b;
        if(b<=l+1)
        cout<<c[b-1]<<endl;
        else
        { n=l+1;
        for(j=c[l]+2;n!=b;j+=2)
        {f=1;
            for(k=2;k<=sqrt(j);k++)
                if(j%k==0)
                   { 
                     k=j;
                     f=0;
                    }
            if(f)       
            {
                n++;
                c[++l]=j;
            }
        }
            cout<<j-2<<endl;        
      }
     }
            
    return 0;
}
