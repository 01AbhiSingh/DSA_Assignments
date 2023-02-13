int Solution::solve(vector<int> &A) {
    map<int,int>mp;
    for(auto i : A){
        mp[i]++; //arr[i] = i ;
    }
    
    for(int i : A){
        if(mp[i]>1) return i;
    }
    
    return -1;
}
