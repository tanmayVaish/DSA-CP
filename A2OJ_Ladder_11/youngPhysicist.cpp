#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 3
// 3 -1 7
// -5 2 -4
// 2 -1 -3

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<vector<int>> v;
    std::vector<int> tempV;

    int temp;

    for(int j=0;j<n;j++){
      for(int i=0;i<3;i++){
        cin>>temp;
        tempV.push_back(temp);
      }
      v.push_back(tempV);
      tempV.clear();
    }
    std::vector<int> res(n,0);

    int sum = 0;
    for(int j=0;j<n;j++){
        res[0] += v[j][0];
        res[1] += v[j][1];
        res[2] += v[j][2];
    }

    for(int i=0;i<n;i++){
      if(res[i] != 0) {
        cout<<"NO";
        return 0;
      }
    }
    cout<<"YES";

    return 0;
}
