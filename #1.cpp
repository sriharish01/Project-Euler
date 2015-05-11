#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long fn(long int n)
    {long long s;
    s=n*(n+1)/2;
    return s;}

int main() {
    long long a ,b[100000];
    cin>>a;
    for (int i=0;i<a;i++)
    cin>>b[i];
long int l,m,n,k=0;
long long s=0;
    
    
while(k<a)  
   {  l=((b[k]-1)/3);
    m=((b[k]-1)/5);
    n=((b[k]-1)/15);
    s=(3*fn(l))+(5*fn(m))-(15*fn(n));
        k=k+1;
        cout<<s<<endl;
        s=0;
   }  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
