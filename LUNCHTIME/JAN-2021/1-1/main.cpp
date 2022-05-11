#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--){
        long long int a=0,b=0,c=0,n,k;
        cin>>a>>b>>c;
        if(a+b==c){cout<<"YES"<<endl;}
        else if(a+c==b){cout<<"YES"<<endl;}
        else if(b+c==a){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}

    }
    return 0;
}
