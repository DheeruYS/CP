// Works when the answer doesnt matter with intervals overlapping eg : minimum , AND 
// Doesnt work for : sum , XOR etc..
// Time complexity of query : O(1)

void build(ll n){

  for(ll i = 1; i <= n; i++) sparse[i][0] = a[i];
  
  for(ll j = 1; j <= K; j++){
    for(ll i = 1; (i+(1ll<<(j-1))) <= n; i++){
      sparse[i][j] = min(sparse[i][j-1],sparse[i+(1ll<<(j-1))][j-1]);
    }
  }
  
}

ll query(ll l , ll r){
	ll k = log2(r-l+1);
	return min(sparse[l][k],sparse[r-(1ll<<k)+1][k]);
}

