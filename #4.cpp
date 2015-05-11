#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int checkpal(long long n)
    {int i=0,c[6],f=1;
    while(n!=0)
      {  c[i++]=n%10;
        n=n/10;
      }
    for(i=0;i<3;i++)
        if(c[i]!=c[5-i])
       {     f=0;
            break;
       }
    return  f;
    }
int checkdigi(int n)
 {   if(n>=100 && n<=999)
     return 1;
    else return 0;
 }
int main() {/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b[100];
    long long i,j,k,s=0;
    cin>>a;
    for(i=0;i<a;i++)
        cin>>b[i];
    for(i=0;i<a;i++)
      {  for(j=b[i];j>=101101;j--)
            for(k=100;k<=999 ;k++)
                 if(j%k==0 && checkdigi(j/k) && checkpal(j))
                    { cout<<j<<endl;
                        j=101100;
                    }
      }
                                      
                            
        
    //check for plaindrome
    //check for 3 digit factors
    //check if other factor is also 3 digit
    return 0;
}
