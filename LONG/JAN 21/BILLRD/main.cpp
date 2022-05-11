#include <iostream>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x,y,counter=0,phasex=0,phasey=0,lastx,lasty;
        cin>>n>>k>>x>>y;

        int temp=k%4;
        if(x==y){cout<<n<<" "<<n<<endl;}
        if(x>y){
            switch(temp){
                case 1:
                    cout<<n<<" "<<n-x+y<<endl;
                    break;
                case 2:
                    cout<<n-x+y<<" "<<n<<endl;
                    break;
                case 3:
                    cout<<0<<" "<<x-y<<endl;
                    break;
                case 0:
                    cout<<x-y<<" "<<0<<endl;
                    break;
            }
        }
        if(x<y){
            switch(temp){
            case 1:
                cout<<x+n-y<<" "<<n<<endl;
                break;
            case 2:
                cout<<n<<" "<<x+n-y<<endl;
                break;
            case 3:
                cout<<y-x<<" "<<0<<endl;
                break;
            case 0:
                cout<<0<<" "<<y-x<<endl;
                break;
            }
        }
    }
    return 0;
}
