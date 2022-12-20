class Solution {
public:
    int mySqrt(int x) {
        long long int high=x-1,low=1,mid;
        if(x<=0) return x;
        while(high>=low){
            mid=(high+ low)/2;
            long long int t=mid*mid;
            if(t==x) return mid;
            else if(t<x) low = mid+1;
            else high = mid-1;

        }
        if(low*low<=x) return low;
        else return high;

    }
};
