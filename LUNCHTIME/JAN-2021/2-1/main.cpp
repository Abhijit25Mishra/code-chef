#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--){
        long long int x=0,b=0,c=0,d=0,n,k,temp;
        cin>>n>>k;
        long long int a[n];
        temp=n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1){x++;temp--;}
            if(a[i]==0||a[i]==1){b++;}
            if(a[i]>k){c++;}
        }


        if(n%2==1){d=(n/2)+1;}
        else {d=n/2;}

        if(temp<d&&x!=0){cout<<"Rejected"<<endl;}
        else if(c>0){cout<<"Too Slow"<<endl;}
        else if(b==n){cout<<"Bot"<<endl;}
        else{cout<<"Accepted"<<endl;}
    }

    return 0;

}
