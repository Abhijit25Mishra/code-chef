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
        int a[n],temp[n];
        for(int i=0;i<n;i++){cin>>a[i];temp[i]=a[i];}
        sort(temp,temp+n);
        for(int i=0;i<n;i++){
            cout<<temp[i];

        }


    }
    return 0;
}
