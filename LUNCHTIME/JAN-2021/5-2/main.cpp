#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--){
        long long int a=0,b=0,c=0,n,k;
        cin>>n>>k;
        long long int x[n],y[n];

        while(k%2==0){k=k/2;}

        for(long long int i=0;i<n;i++){
            cin>>x[i];
            if(x[i]%k==0){c++;}
        }
        if(c==n){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}

    }
    return 0;
}
