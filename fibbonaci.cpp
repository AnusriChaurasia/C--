#include <bits/stdc++.h>
using namespace std;
vector<long long> printFibb(int);

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the value";
        cin>>n;
        vector<long long> ans = printFibb(n);

        for (long long i:ans)cout<<i<<' ';
        cout<<endl;

    }
    return 0;
}

vector<long long> printFibb(int n) {
    //code here
    vector<long long> a(n, 0);

    if (n == 1)
    {
        a[0] = 1;
    }
    else if (n == 2)
    {
        a[0] = 1;
        a[1] = 1;
    }

    else
    {
        a[0] = 1;
        a[1] = 1;
        for (int i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
    }

    return a;
}