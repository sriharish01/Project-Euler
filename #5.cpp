#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long hcf(long long m,long long n)
{
    if(n>m)
    return hcf(n,m);
    else if(n==0)
        return m;
    else
        return hcf(n,m%n);
}
long long lcm(long long m,long long n)
{
     long long k=hcf(m,n);
         return m*n/k;
         
        
}
int main() {
    long long a,b[10],c,i,j;
    cin>>a;
    for(i=0;i<a;i++)
        cin>>b[i];
    for(i=0;i<a;i++)
      { //cin>>b[i];
        c=b[i];
        for(j=b[i]-1;j>=1;j--)
            c=lcm(c,j);
            cout<<c<<endl;
       }     
          
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
