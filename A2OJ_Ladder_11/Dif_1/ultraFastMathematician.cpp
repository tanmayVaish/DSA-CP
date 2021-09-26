#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string a,b;
    cin>>a>>b;
    string res = "";
    for(int i=0;i<a.size();i++){
      res = res + to_string( (int)(a[i]-'0') ^ (int)(b[i]-'0') );
    }

    cout<<res<<endl;

    return 0;
}
