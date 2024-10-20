#include <bits/stdc++.h>
#pragma comment(linker, "/STACK:200000000")
using namespace std;
typedef long long int ll;

ll mod=1000000007;
class SegmentTree {
public:
    SegmentTree(int n) {
        this->n = n;
        tree.resize(4 * n);
        lazy.resize(4 * n, 0);
    }

    void updateRange(int left, int right, int value) {
        updateRange(1, 0, n - 1, left, right, value);
    }

    int query(int left, int right) {
        int index = query(1, 0, n - 1, left, right);
        return index;
    }

private:
    int n;
    vector<int> tree;
    vector<int> lazy;

    void updateRange(int node, int start, int end, int left, int right, int value) {
        if (lazy[node] != 0) {
            tree[node] += lazy[node];
            if (start != end) {
                lazy[2 * node] += lazy[node];
                lazy[2 * node + 1] += lazy[node];
            }
            lazy[node] = 0;
        }

        if (start > right || end < left) {
            return;
        }

        if (start >= left && end <= right) {
            tree[node] += value;
            if (start != end) {
                lazy[2 * node] += value;
                lazy[2 * node + 1] += value;
            }
            return;
        }

        int mid = (start + end) / 2;
        updateRange(2 * node, start, mid, left, right, value);
        updateRange(2 * node + 1, mid + 1, end, left, right, value);
        if (tree[2 * node] >= tree[2 * node + 1]) {
            tree[node] = tree[2 * node];
        } else {
            tree[node] = tree[2 * node + 1];
        }
    }

    int query(int node, int start, int end, int left, int right) {
        if (lazy[node] != 0) {
            tree[node] += lazy[node];
            if (start != end) {
                lazy[2 * node] += lazy[node];
                lazy[2 * node + 1] += lazy[node];
            }
            lazy[node] = 0;
        }

        if (start > right || end < left) {
            return -1; // Return an invalid index.
        }

        if (start >= left && end <= right) {
            return start; // Return the current index.
        }

        int mid = (start + end) / 2;
        int leftIndex = query(2 * node, start, mid, left, right);
        int rightIndex = query(2 * node + 1, mid + 1, end, left, right);
        
        if (leftIndex == -1) {
            return rightIndex;
        }
        if (rightIndex == -1) {
            return leftIndex;
        }
        
        // Return the index of the maximum value in the range.
        return (tree[leftIndex] >= tree[rightIndex]) ? leftIndex : rightIndex;
    }
};
 long long power(long long x, long long y, long long m = mod) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}



int main(){
		//freopen("back_in_black_chapter_1_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	unsigned long int  n,x;cin>>n;
	while(n%2==0)
		n/=2;
	while(n%3==0)
		n/=3;
	
	if(n==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
    return 0;
}