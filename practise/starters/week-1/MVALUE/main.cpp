#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int ex(long long int a, long long int b){
    return ((a*b)+(a-b));
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        long long int maxi=-1000000000;
        if(n>45){
        for(long long int i=0;i<20;i++){
            for(long long int j=0;j<20;j++){
                if(i!=j && ex(a[i],a[j])>maxi){maxi=ex(a[i],a[j]);}
            }
        }
        for(long long int i=1;i<20;i++){
            for(long long int j=1;j<20;j++){
                if(i!=j && ex(a[n-i],a[n-j])>maxi){maxi=ex(a[n-i],a[n-j]);}
            }
        }
        }
        else{
            for(long long int i=0;i<n;i++){
                for(long long int j=0;j<n;j++){
                    if(i!=j && ex(a[i],a[j])>maxi){maxi=ex(a[i],a[j]);}
            }
        }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
