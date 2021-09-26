
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    unordered_map<int, int> m;
    int a;
    for(int i=0;i<4;i++){
      cin>>a;
      m[a]++;
    }
    int c = 0;
    for(auto i:m){
      if(i.second > 1) c+=i.second-1;
    }
    cout<<c;

    return 0;
}
