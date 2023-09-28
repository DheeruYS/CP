while(n > 1){
  // process the prime factor spf[n];
  n = n/spf[n];
}

// Time Complexity = log(n)
