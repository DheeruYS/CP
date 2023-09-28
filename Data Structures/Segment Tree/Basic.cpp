vector<ll> a(N);
vector<ll> seg(4*N);

void build(ll node , ll l , ll r){
 
  if(l == r){
      seg[node] = a[l];
      return;
  }

  ll mid = (l+r)/2;

  build(2*node,l,mid);
  build(2*node+1,mid+1,r);

  seg[node] = seg[2*node]+seg[2*node+1];
}
 
ll query(ll node , ll left , ll right , ll ql , ll qr){
 
  if(right < ql || left > qr) return -1;
  if(left >= ql && right <= qr) return seg[node];
  
  ll mid = (left+right)/2;
  
  ll l = query(2*node,left,mid,ql,qr);
  ll r = query(2*node+1,mid+1,right,ql,qr);
  
  return l+r;
}
