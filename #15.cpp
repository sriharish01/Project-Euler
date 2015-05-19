#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long ms(long long n)
{
    long long i,k=1;
    for(i=n;i>1;i--){
        k*=i;
    }
    return k;
}
long long comb(long long n, long long m)
{
    long long i,j,k,l;
    i=ms(n+m);
    j=ms(n);
    k=ms(m);
    l=j*k;
    l=i/l;
    return l%1000000007;
}
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,n,m,i,j,k;
    cin>>a;
    for(i=0;i<a;i++)
        {
        cin>>m>>n;
        cout<<comb(n,m)<<endl;
    }
    return 0;
}
