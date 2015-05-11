#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a ,b[100000],m=1,n=1,l,i,s=0;
    cin>>a;
    for(i=0;i<a;i++)
        cin>>b[i];
    i=0;
    while(i<a)
    {   s=0;
     m=2;
     n=1;
            while(m<b[i])
            {
            l=m+n;
                if(m%2==0)
                s=s+m;
            n=m;
            m=l;
            }
     cout<<s<<endl;
               i++;
    }
    return 0;
}
