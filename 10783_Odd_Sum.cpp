#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=1;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long sum=0;
        for(int i=a; i<=b; i++){
            if(i%2!=0) sum=sum+i;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        i++;
    }
    return 0;
}