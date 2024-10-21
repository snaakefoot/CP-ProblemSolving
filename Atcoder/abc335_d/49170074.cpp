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

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
		FAST;
	int t=1;
	
	while(t--){
		int n,n1,cnt=2;cin>>n;
		n1=n;
		int m[45][45]={0};
		int currx=1,curry=1;
		m[currx-1][curry-1]=1;
		while(n1!=1){
			for(int k=0;k<4;++k){
				for(int i=0;i<n1-1-(k==3);++i){
					
					currx+=dx[k];
					curry+=dy[k];
					m[currx-1][curry-1]=cnt;
					++cnt;
				}
			}
			currx++;
			m[currx-1][curry-1]=cnt;
			++cnt;
			n1-=2;
		
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(i==n/2 && j==n/2)
					cout<<'T'<<' ';
				else
				cout<<m[i][j]<<' ';
			}
			cout<<endl;
		}
	}
    return 0;
}
