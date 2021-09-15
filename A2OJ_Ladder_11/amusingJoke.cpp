
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string a,b;
    cin>>a>>b;
    string c;
    cin>>c;
    unordered_map<char, int> m;

    for(int i=0;i<a.size();i++) m[a[i]]++;
    for(int i=0;i<b.size();i++) m[b[i]]++;

    for(int i=0;i<c.size();i++){
      m[c[i]]--;
    }

    for(auto i: m){
      if(i.second != 0){
        cout<<"NO";
        return 0;
      }
    }

    cout<<"YES";



    return 0;
}
