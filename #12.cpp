#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,c[10000],d=2,i,m,j,k,l=1;
    cin>>a;
    c[0]=1;
    c[1]=3;    
    for(i=0;i<a;i++)
    {   cin>>b;
        if(b<=l)
            cout<<c[b]<<endl;
        else
            {
            for(j=c[l];l<b;j+=((1+sqrt(8*j+1))/2))
            {m=sqrt(j);
                if(j==m*m)
                d=3;
             else
                 d=2;
             //cout<<j<<" "<<l;
                for(k=2;k<sqrt(j);k++)
                {
                if(j%k==0)
                    d+=2;
                }
            //cout<<" "<<d<<endl;
            if(d>l+1)
            while(l+1<d)
            c[++l]=j;
                
            }
        cout<<c[b]<<endl;}
    }
    return 0;
}
