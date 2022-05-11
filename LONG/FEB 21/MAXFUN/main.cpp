#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a[n];
        long long int x=0,y=0,z=0,sum=0;
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        x=a[0];
        z=a[n-1];
        for(long long int i=0;i<n;i++){
            if((abs(x-z)+abs(a[i]-x)+abs(z-a[i])>sum)&&(i!=0)&&(i!=n-1)){sum=abs(x-z)+abs(a[i]-x)+abs(a[i]-z);}
        }
        cout<<sum<<endl;
    }
    return 0;
}
