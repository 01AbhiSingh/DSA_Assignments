class Solution {
public:
    int firstBadVersion(int n) {
        long long int h = n, l = 1,m;
        
        while(l<h){
            m = l + (h - l) / 2;
            if (isBadVersion(m)) h = m; 
            else l = m + 1;
            
        }
        return l;

    }
};    
