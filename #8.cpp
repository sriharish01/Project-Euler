#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long t,k,n,i,j,l,s=1,m,max=0;
    char a[1000],b[10],c;
    cin>>t;
    for(i=0;i<t;i++)
        {
        cin>>n>>k;
        for(j=0;j<n;j++)
            cin>>a[j];
        for(j=0;j<n-k;j++)
            {s=1;
             
            for(l=j;l<k+j;l++)
                {c=a[l];
                 //cout<<c<<endl;
                s=s*(c-48);
                
            }//cout<<endl;
             
            if(max<s)
                max=s;
             
            
            }
            cout<<max<<endl;
            max=0;
        }
    
    return 0;
}
