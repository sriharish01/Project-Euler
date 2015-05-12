#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int a[20][20],s=0,s1=0,s2=0,s3=0,s4=0,i,j;
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
            cin>>a[i][j];
     
        for(i=0;i<=16;i++)
            for(j=0;j<20;j++)
                {
                 s=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
                 if(s>s1)
                    s1=s;}
            for(i=0;i<=20;i++)
            for(j=0;j<=16;j++)
                {
                 s=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
                 if(s>s2)
                    s2=s;}
            for(i=0;i<=16;i++)
            for(j=0;j<=16;j++)
                {
                 s=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
                 if(s>s3)
                    s3=s;}
    
           for(i=0;i<17;i++)
            for(j=3;j<20;j++)
                {
                 s=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
                 if(s>s4)
                    s4=s;}
    
           if(s1>=s2&&s1>=s3&&s1>=s4)
               cout<<s1;
           else if(s2>=s1 && s2>=s3&&s2>=s4)
               cout<<s2;
           else if(s3>=s1 && s3>=s2&&s3>=s4)
              cout<<s3;
           else 
               cout<<s4;
    return 0;
}
