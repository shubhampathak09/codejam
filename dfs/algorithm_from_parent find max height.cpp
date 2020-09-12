void dfs2(vector<int> v[], int u, int parent) 
{ 
    // stores the longest and second  
    // longest branches 
    int mx1 = -1, mx2 = -1; 
  
    // traverse in the subtress of u 
    for (int child : v[u]) { 
        if (child == parent) 
            continue; 
  
        // compare and store the longest 
        // and second longest 
        if (in[child] >= mx1) { 
            mx2 = mx1; 
            mx1 = in[child]; 
        } 
  
        else if (in[child] > mx2) 
            mx2 = in[child]; 
    } 
  
    // traverse in the subtree of u 
    for (int child : v[u]) { 
        if (child == parent) 
            continue; 
  
        int longest = mx1; 
  
        // if longest branch has the node, then 
        // consider the second longest branch 
        if (mx1 == in[child]) 
            longest = mx2; 
  
        // recursively calculate out[i] 
        out[child] = 1 + max(out[u], 1 + longest); 
  
        // dfs function call 
        dfs2(v, child, u); 
    } 
} 
