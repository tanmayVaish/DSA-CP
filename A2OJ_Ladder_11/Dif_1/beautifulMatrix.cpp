#include <bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<vector<int>> v;
    std::vector<int> tempV;
    int temp=0,x=0,y=0;

    for(int j=0;j<5;j++){
      for(int i=0;i<5;i++){
        cin>>temp;
        tempV.push_back(temp);
        if(temp == 1){
          x = j;
          y = i;
        }
      }
      v.push_back(tempV);
      tempV.clear();
    }



    int res = abs((2-x)) + abs((2-y));
    cout<<res;

    return 0;
}
