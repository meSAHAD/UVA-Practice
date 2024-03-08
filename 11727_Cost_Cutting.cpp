#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    for(int i=1; i<=t;i++)
    {
        int salary[3];
        for(int i=0; i<3;i++){
            cin>>salary[i];
        }
        sort(salary, salary+3);
        cout<<"Case "<<i<<": "<<salary[1]<<endl;
    }
    return 0;
}