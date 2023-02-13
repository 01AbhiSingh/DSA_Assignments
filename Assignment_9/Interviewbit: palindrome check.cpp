int Solution::solve(string A) {
    map<char,int>mp;
    for(int i=0;i<A.size();i++) mp[A[i]]++;
    int one = 0;
    if(A.size()<=1) return 1;
    for(auto it : mp){
        if(it.second%2==1) one++;
        if(it.second%2!=0 and one > 1) return 0;
    }
    return 1;
}
