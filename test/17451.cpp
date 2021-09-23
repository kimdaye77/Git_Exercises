#include <bits/stdc++.h>
#define FASTIO cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    FASTIO;
    long long  n; cin>>n;
    vector <long long> v(n);
    for(int i = 0; i<n; i++){
      cin>>v[i];
    }
    long long ans = v[n-1];
    for(int i = n-2; i>=0; i--){
      if(ans<=v[i] && v[i]%ans != 0) {
        ans = v[i];
      }
      else {
        if(ans%v[i] == 0) {
          continue;
        }
        ans = (ans/v[i]+1)*v[i];
      }
      cout<<ans<<",\n";
    }
    cout<<ans;

    return 0;
}