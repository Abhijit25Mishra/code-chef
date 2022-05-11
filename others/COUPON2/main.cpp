#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int d,c;
        cin>>d>>c;   //delivery chare and price of copon
        int a[3],b[3];
        int a_sum=0,b_sum=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            a_sum+=a[i];
        }
        for(int i=0;i<3;i++){
            cin>>b[i];
            b_sum+=b[i];
        }
        int total_cost=0;

        if(a_sum>=150 && b_sum>=150){
            if(c<(2*d)) {cout<<"YES"<<endl;}
            else        {cout<<"NO"<<endl;}
        }
        else if((a_sum>=150 && b_sum<150)||(a_sum<150 && b_sum>=150)){
            if (c<d){cout<<"YES"<<endl;}
            else    {cout<<"NO"<<endl;}
        }
        else if(a_sum<=150 && b_sum<=150){cout<<"NO"<<endl;}
        else{cout<<"NO"<<endl;}

    }
    return 0;
}
