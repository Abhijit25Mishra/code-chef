#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int s;//seasons
        cin>>s;
        long long int intro[s];
        long long int num_ep[s];
        long long int season_length[s]={0};

        for(long long int i=0;i<s;i++){
            cin>>intro[i];
        }
        for(long long int i=0;i<s;i++){
            cin>>num_ep[i];
            long long int len_ep[num_ep[i]];
            season_length[i]=0;
            for(long long int j=0;j<num_ep[i];j++){
                cin>>len_ep[j];
                season_length[i]+=len_ep[j];
            }
        }
            long long int total=0;
        for(int i=0;i<s;i++){
            total+=season_length[i];
            total-=intro[i]*(num_ep[i]-1);
        }
        cout<<total<<endl;



    }
    return 0;
}
