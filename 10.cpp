#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,c[1000000],n,m,i,j,k,l=1,f,s;
    cin>>a;
    c[0]=2;
    c[1]=3;
    for(i=0;i<a;i++)
        
     { s=0;
        cin>>b;
        if(b<=c[l])
        {for(m=0;c[m]<=b;m++)
            s+=c[m];
            cout<<s<<endl;}
        else
        { n=l+1;
         for(m=0;m<n;m++)
            s+=c[m];
        for(j=c[l]+2;j<=b;j+=2)
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
                s+=c[l];
            }
        }
            cout<<s<<endl;        
      }
     }
            
    return 0;
}
