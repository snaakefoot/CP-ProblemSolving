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



			struct TrieNode* root=getNode();
			struct TrieNode* pCrawl;
			vector<struct TrieNode*> a[n];
			lp(i,n)
				cin>>ch;
				a[i]=insert(root,ch);