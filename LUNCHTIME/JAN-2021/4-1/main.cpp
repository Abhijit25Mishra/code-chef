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
        for(long long int i=0;i<n;i++){
            cin>>x[i];
            a+=x[i];


        }
        if(a%2==1){cout<<2<<endl;}
        else {cout<<1<<endl;}


        }
    return 0;
}
