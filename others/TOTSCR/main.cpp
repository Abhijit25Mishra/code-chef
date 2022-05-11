#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k;//n==number of people k==no.of questions
        cin>>n>>k;
        long long int a[k];
        string b[n];
        long long int sum[n]={0};

        for(long long int i=0;i<k;i++){cin>>a[i];}

        for(long long int i=0;i<n;i++){cin>>b[i];}




        for(long long int i=0;i<n;i++){

            for(long long int j=0;j<k;j++){

                if(b[i][j]=='0'){continue;}

                else {sum[i]+=a[j];}
            }
        }
        for(long long int i=0;i<n;i++){
            cout<<sum[i]<<endl;
        }


    }
    return 0;
}
