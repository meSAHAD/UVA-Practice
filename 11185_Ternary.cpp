#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1){
        cin>>n;
        if(n<0) break;
        else if (n==0) cout<<"0"<<endl;
        else{
            int ternary[32];
        int i=0;
        while(n>0){
            ternary[i]=n%3;
            n=n/3;
            i++;
        }
        for(int j=i-1;j>=0;j--){
            cout<<ternary[j];
        }
        cout<<endl;
    }
    }
    return 0;
}