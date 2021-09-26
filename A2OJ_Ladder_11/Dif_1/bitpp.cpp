#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    string s;
    int x = 0;
    for(int i=0;i<n;i++){
      cin>>s;
      if(s == "++X") ++x;
      else if(s == "X++") x++;
      else if(s == "--X") --x;
      else if(s == "X--") x--;
    }
    cout<<x;

    return 0;
}
