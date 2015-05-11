#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long  a,b[10000],c,d,e,i,j;
    cin>>a;
    for(i=0;i<a;i++)
        cin>>b[i];
    for(i=0;i<a;i++)
    {
        c=b[i]*(b[i]+1)/2;
        c=c*c;
        d=b[i]*(b[i]+1)*(2*b[i]+1)/6;
        
        e=c-d;
            
        cout<<e<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
