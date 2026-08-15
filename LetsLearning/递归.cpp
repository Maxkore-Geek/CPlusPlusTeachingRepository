#include<bits/stdc++.h>
using namespace std;

int f(int n){
    int res;
    if(n==1) res=1;
    else res=f(n-1)+3;
    return res;
}

int main()
{
    cout<<f(6)<<endl;
    return 0;
}