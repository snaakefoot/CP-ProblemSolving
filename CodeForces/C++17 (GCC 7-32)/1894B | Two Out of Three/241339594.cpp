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
  int n,nb=0;cin>>n;
 
  int a[n];
  map<int,int> m;
  vector<int> v[101];
  vector<int> doa;
  int ans[n]={1};
  for(int i=0;i<n;++i){
   ans[i]=1;
   cin>>a[i];
   m[a[i]]++;
   if(m[a[i]]==2){
    doa.push_back(a[i]);
   }
   v[a[i]].push_back(i);
   
   
  }
  if(doa.size()>1){
   for(int i=0;i<(v[doa[0]]).size();++i){
    if(i)
     ans[v[doa[0]][i]]=1;
    else
     ans[v[doa[0]][i]]=2;
   }
   for(int i=1;i<doa.size();++i){
    for(int j=0;j<v[doa[i]].size();++j){
    if(j)
     ans[v[doa[i]][j]]=1;
    else
     ans[v[doa[i]][j]]=3;
   }
   }
   for(int i=0;i<n;++i)
    cout<<ans[i]<<" ";
   cout<<endl;
  }
  else
   cout<<-1<<endl;
  
 }
    return 0;
}