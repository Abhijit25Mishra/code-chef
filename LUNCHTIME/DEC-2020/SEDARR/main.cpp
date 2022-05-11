#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k,z=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

            z+=a[i];
        }


        if(z%k==0){cout<<0<<endl;}
        else {cout<<1<<endl;}
    }
    return 0;
}
