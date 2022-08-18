#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, a, b, k; vector<int> p(10000007, 0);

int main(){

    for(int i=2; i<10000007; i++){
        if(p[i]) continue;
        for(int j=i; j<10000007; j+=i) p[j]++;
    }

    //for(int i=2; i<20; i++) cout<<i<<": "<<p[i]<<endl;

    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b>>k; int ans = 0;
        for(; a<=b; a++){
            if(p[a]==k) ans++;
        }
        cout<<"Case #"<<i<<": "<<ans<<'\n';
    }

    return 0;
}
