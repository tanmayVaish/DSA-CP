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
    int v[n];

    for(int i=0;i<n;i++){
      cin>>v[i];
    }

    int max=INT_MIN,  min = INT_MAX;
    int max_ind,min_ind;

    for(int i=0;i<n;i++){
      if(v[i]>max){
        max_ind = i;
        max = v[i];
      }
      if(v[i]<=min){
        min_ind = i;
        min = v[i];
      }
    }
    
    // cout<<"index: "<<min_ind<<" min value: "<<min<<endl;
    // cout<<"index: "<<max_ind<<" max value: "<<max<<endl;

    int max_dist = max_ind - 1;
    int min_dist = (n) - min_ind;

    // cout<<min_dist<<" "<<max_dist<<endl;

    int res = min_dist + max_dist;
    if(min_ind <= max_ind) cout<<(res-1);
    else cout<<res;

    return 0;
}
