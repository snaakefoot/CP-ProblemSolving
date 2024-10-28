const ll mod=1e9 +7;
const int MAXN = 1e6;
const int dim=6;
ll x[dim][dim],y[dim][dim];
/** Computes a^b modulo m in O(log m) time. */
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
void mult(ll A[dim][dim], ll B[dim][dim]){
    ll C[dim][dim];
    memset(C, 0, sizeof(C));
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            for(int k = 0; k < dim; k++){
                C[i][j] += A[i][k] * B[k][j];
                C[i][j] %= mod;
            }
        }
    }
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            A[i][j] = C[i][j];
}
 
long long fact[MAXN + 1], invfact[MAXN + 1];
 
/** Precomputes n! from 0 to MAXN. */
void factorial(long long p=mod) {
	fact[0] = 1;
	for (int i = 1; i <= MAXN; i++) {
		fact[i] = fact[i - 1] * i % p;
	}
}
 
/** Precomputes all modular inverse factorials from 0 to MAXN in O(n log p) time */
void inverses(long long p=mod) {
	invfact[0] = 1;
	for (ll i = 1; i <= MAXN; i++) {
		invfact[i] = power(fact[i], p - 2, p);
	}
}
 
/** Computes nCr mod p */
ll NCR(ll n, ll r, ll p=mod)
{
    if(r < 0 || n < 0)
        assert(false);
 
    if(n < r ) return 0;
 
    if(r==0 || r==n)
        return 1;
 
    return ((( fact[n] * invfact[r])  % mod ) * invfact[n-r] ) %mod;
}
 