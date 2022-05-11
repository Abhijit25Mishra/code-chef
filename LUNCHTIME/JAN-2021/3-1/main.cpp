#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--){
        long long int a=0,b=0,c=0,n,k;
        cin>>n;
        long long int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
            if(x[i]%2==0){a++;}
            else{b++;}
        }
        if(a>b){cout<<b<<endl;}
        else {cout<<a<<endl;}



    }
    return 0;
}
