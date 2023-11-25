void update(ll node, ll val){
    for(ll i = node; i <= n; i += (i & -i)){
    	fenwick[i] += val;
    }
}

ll get(ll node){
    ll ans = 0;
    for(ll i = node; i >= 1; i -= (i & -i)){
        ans += fenwick[i];
    }
    return ans;
}
