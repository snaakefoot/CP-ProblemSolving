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
		int n,q,p,m,currx=1,curry=0,cnt=1;
		char c;
		cin>>n>>q;
		vector<pair<int,int> > v;
		v.push_back(make_pair(1,0));
		while(q--){
			cin>>m;
			if(m==1){
				cin>>c;
				if(c=='U')
					++curry;
				if(c=='D')
					--curry;
				if(c=='R')
					++currx;
				if(c=='L')
					--currx;
				v.push_back(make_pair(currx,curry));
				++cnt;
			}
			else{
				cin>>p;
				if(p>cnt){
					cout<<p-cnt+1<<' '<<0<<endl;
				}
				else{
					
					cout<<v[cnt-p].first<<' '<<v[cnt-p].second<<endl;
				}
			}
		}
	}
    return 0;
}
