#include <iostream>

using namespace std;

int main(){

    long long t;
    cin>>t;
    while(t--){

        long long k,d,n,b=0,c;
        cin>>n>>k>>d;
        c=k*d;

        long long a[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b+=a[i];
        }
        if(b>c){cout<<d<<endl;}
        else {cout<<b/k<<endl;}
    }

    return 0;
}
