vector<ll> linearSieve(int n) {
    vector<ll> spf(n + 1);
    vector<ll> primes;
    for (int i = 2; i <= n; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            primes.push_back(i);
        }
        for (int j = 0; j < (int)primes.size() && primes[j] <= spf[i] && i * primes[j] <= n; j++) {
            spf[i * primes[j]] = primes[j];
        }
    }
    return spf;
}
 
vector<ll> mobius(int n) {
    vector<ll> mu(n + 1, 1);
    vector<ll> spf = linearSieve(n);
    for (int i = 2; i <= n; i++) {
        if (spf[i] == spf[i / spf[i]]) mu[i] = 0; 
        else mu[i] = -mu[i / spf[i]]; 
    }
    return mu;