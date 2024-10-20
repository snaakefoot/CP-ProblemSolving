#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
int lengthOfLIS(vector<int>& nums)
{
    int n = nums.size();
    vector<int> ans;
 
    ans.push_back(nums[0]);
 
    for (int i = 1; i < n; i++) {
        if (nums[i] >= ans.back()) {
            ans.push_back(nums[i]);
        }
        else {
			int low = upper_bound(ans.begin(), ans.end(),nums[i])- ans.begin();
            ans[low] = nums[i];
        }
    }

    return ans.size();
}


int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
		FAST;
	int t=1;
	
	while(t--){
		int n;cin>>n;
		++n;
		for(int i=0;i<n;++i){
			for(int j=0;j<n-i;++j){
				for(int k=0;k<n-i-j;++k)
					cout<<i<<' '<<j<<' '<<k<<endl;
			}
		}
	}
    return 0;
}