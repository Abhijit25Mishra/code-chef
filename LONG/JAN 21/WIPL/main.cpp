#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[n];
            cout<<i<<endl;
        }
        sort(a,a+n,greater<>());
        int z;
        for(int i=0;i<n;i++){
            if((2*k)>sum){sum+=a[i];z=i;}

        }
        cout<<i<<endl;
    }
    return 0;
}
