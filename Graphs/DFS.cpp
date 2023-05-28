void dfs(ll s){

	// process node s
	visited[s] = true;

	for(auto u : adj[s]){
		if(!visited[u]){
			dfs(u);
		}
	}
}
