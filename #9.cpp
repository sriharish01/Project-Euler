#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   long long i, t,a,b,c,n,f=-1;
    cin>>t;
        for(i=0;i<t;i++)
        {
        cin>>n;
            f=-1;
        for(a=n/3;a>=3;a--)
            for(b=(n/2)-1;b>=a+1;b--)
            {c=n-a-b;
            if((c*c)==(a*a)+(b*b))
                
                  { f=a*b*c;
                   a=3;
             b=2;}
                      
            }
        cout<<f<<endl;
    }
    
    return 0;
}
