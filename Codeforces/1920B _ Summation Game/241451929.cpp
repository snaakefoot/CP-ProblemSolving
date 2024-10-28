#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmx=1e6+1;
const int ALPHABET_SIZE = 26;
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
    int isEndOfWord;
 int nbOfprefix;
};
 
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode =  new TrieNode;
 
    pNode->isEndOfWord = 0;
 pNode->nbOfprefix = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;
 
    return pNode;
}
 
vector<struct TrieNode*> insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 vector<struct TrieNode*> v;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
  v.push_back(pCrawl->children[index]);
        pCrawl = pCrawl->children[index];
    }
    (pCrawl->isEndOfWord) +=1;
 return v;
}
 
 
bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
        pCrawl = pCrawl->children[index];
    }
 
    return (pCrawl->isEndOfWord);
}
void countPref(struct TrieNode *root,int x){
 struct TrieNode *pCrawl = root;
 int x1=x;
 if(pCrawl->isEndOfWord)
  x1+=pCrawl->isEndOfWord;
 pCrawl->nbOfprefix=x1;
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        
        if (pCrawl->children[i])
            countPref(pCrawl->children[i],x1);
    }
 
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 FAST;
 int t;cin>>t;
 while(t--){
  int n,nb=0,x,k;cin>>n>>k>>x;
 
  int a[n];
  bool test;
  ll pref[n];
  ll s=0;
  for(int i=0;i<n;++i){
   
   cin>>a[i];
   s+=a[i];
   
 
  }
  sort(a,a+n);
  for(int i=0;i<n;++i){
   
   
   if(i)
    pref[i]=a[i]+pref[i-1];
   else
    pref[i]=a[i];
 
  }
  ll mn,inter;
  if(x!=n)
   mn=(pref[n-1]-pref[n-1-x])*2;
  else
   mn=2ll*s;
  
  for(int i=1;i<=min(k,n-1);++i){
   inter=pref[n-1]-pref[n-1-i];
   
   if(n-1-i-x>=0)
    inter+=2*(pref[n-1-i]-pref[n-1-i-x]);
   else
    inter+=2*(pref[n-1-i]);
   
   mn=min(mn,inter);
  }
 
  if(k==n)
   mn=min(s,mn);
  cout<<s-mn<<endl;
  
  
  
 }
    return 0;
}