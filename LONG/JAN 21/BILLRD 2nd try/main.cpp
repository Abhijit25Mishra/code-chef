#include <iostream>
#define ll long long

using namespace std;

int smaller_of(int a, int b){
    if(a>b){return a;}
    else {return b;}
}


int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x,y,counter=0,phase=0,lastx,lasty;
        cin>>n>>k>>x>>y;
        ll b;
        b=n-smaller_of(x,y);

        while(x!=n&&y!=n){x++;y++;}

        if(x==n&&y==n){cout<<x<<" "<<y<<endl;continue;}
        ll a=k%4;


        if(a==1){cout<<x<<" "<<y<<endl;}
        else if(a==2){cout<<y<<" "<<x<<endl;}

        if(x==n){
            if(a==3){
                cout<<0<<" "<<x-y<<endl;
            }
            else if(a==0){
                cout<<y-x<<" "<<0<<endl;
            }
        }
        else{
            if(a==3){
                cout<<y-x<<" "<<0<<endl;
            }
            else if(a==0){
                cout<<0<<" "<<y-x<<endl;
            }
        }

    }
    return 0;
}
