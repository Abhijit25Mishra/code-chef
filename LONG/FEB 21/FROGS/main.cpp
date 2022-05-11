#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=10000,mini_p=-1,crock=0;
        int weight[n],sortedweight[n],jump[n],position[n];
        for(int i=0;i<n;i++){
            cin>>weight[i];
        }
        for(int i=0;i<n;i++){
            cin>>jump[i];
        }
        for(int i=0;i<n;i++){
            sortedweight[i]=weight[i];
            position[i]=i;
            if(weight[i]<mini){mini=weight[i];mini_p=position[i];}
        }
        sort(sortedweight,sortedweight+n); //sorting in acending order!
     //   cout<<" these are the postions "<<mini<<"    "<<mini_p;
/*
        for(int i=0;i<n;i++){
            cout<<sortedweight[i]<<" ";
        }
*/
        int k=1;
        for(int i=0;i<n;i++){
            if(k==n){break;}
            if(sortedweight[k]==weight[i] && position[i]<=mini_p){
                while(position[i]<=mini_p){
                    position[i]+=jump[i];
                    crock++;
                }
                mini_p=position[i];
                //cout<<endl<<endl<<mini_p<<"updated positons "<<endl;
                k++;
                i=-1;
            }
            else if(sortedweight[k]==weight[i] && position[i]>mini_p){
                mini_p=position[i];
                //cout<<endl<<endl<<mini_p<<"updated positons "<<endl;
                k++;
                i=-1;
                continue;
            }
            else{continue;}
        }
        cout<<crock<<endl;
    }
    return 0;
}
