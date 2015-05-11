#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long max=0;
void prime(long long n)
    {
    long long i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return;
    if(::max<n)
        ::max=n;
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    long long b[100],i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {   for(j=2;j<=sqrt(b[i]);j++)
           { if(b[i]%j==0)
              { prime(j);
               prime(b[i]/j);}
           }
     if (::max==0)
       prime (b[i]);
        cout<<::max<<endl;
        ::max=0;
    }
    return 0;
}
