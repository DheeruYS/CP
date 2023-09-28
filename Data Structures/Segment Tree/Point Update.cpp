void pointupdate(ll node , ll left , ll right , ll pos , ll val){

  if(left == right){
    a[left] = val;
    seg[node] = val;
    return;
  }
  
  ll mid = (l+r)/2;
  
  if(pos <= mid) pointupdate(2*node,left,mid,pos,val);
  else pointupdate(2*node+1,mid+1,right,pos,val);
  
  seg[node] = seg[2*node]+seg[2*node+1];
}
