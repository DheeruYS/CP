vector<ll> level(N,-1);
queue<ll> q;

q.push(s);
level[s] = 0;

while(q.size()){
  
  ll a = q.front();
  q.pop();

  // process node a

  for(auto u : adj[a]){
    if(level[u] == -1){
      level[u] = level[a]+1;
      q.push(u);
    }
  }
  
}
