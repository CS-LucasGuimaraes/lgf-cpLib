ll modInverse(ll n) {
    ll ex = MOD-2, result = 1;
    while (ex > 0) {
        if (ex % 2 == 1) {
            result = (result*n) % MOD;
        }
        n = (n*n) % MOD;
        ex /= 2;
    }
    return result;
}