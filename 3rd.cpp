#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
    lli t;
    cin>>t;
    lli a,b;
    vector<pair<lli, bool>>arr;
    while(t--){
        cin>>a>>b;
        arr.push_back({a,false});
        arr.push_back({a+b, true});
    }
    sort(arr.begin(), arr.end());
    lli n= arr.size();
    lli ans =0;
    lli mx = INT_MIN;

    for(lli i=0;i<n;++i){
        if(!arr[i].second){
            ans++;
        }
        else{
            ans--;
        }
        mx =max(mx, ans);
    }
    cout<<mx<<endl;
}
