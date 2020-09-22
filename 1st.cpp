#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        vector<lli> arr(n);
        for(lli i=0;i<n;++i)
            cin>>arr[i];

        lli i=0, ans1 =0, prev=0;
        vector<lli> ans(n, 0);
        ans[0]=1;

        for(lli i=1; i<n;++i){
            if(ans[i] == 0)
                ans[i]=1;
            if(arr[i] > arr[i-1]){
                ans[i] = ans[i-1]+1;
            }
        }

        for(lli i=n-1; i>0; --i){
            if(arr[i-1] > arr[i] && ans[i-1] <=ans[i])
                ans[i-1] = ans[i]+1;
        }

        for(lli i=0;i<n;++i)
            ans1+=ans[i];

        cout<<ans1<<endl;
    }
}
