// TofFind if a number if prime or not

prime[2] = true;

for(ll i = 2; i <= N; i++){
  if(prime[i]){
    for(ll j = i*i; j <= N; j+=i){
      prime[j] = false;
    }
  }
}

// To find the smallest prime factor of a number

for(ll i = 2; i <= N; i++){
  if(!spf[i]){
    spf[i] = i;
    for(ll j = i*i; j <= N; j+=i){
      if(!spf[j]) spf[j] = i;
    }
  }
}

// Time Complexity --> n*log(log(n))
