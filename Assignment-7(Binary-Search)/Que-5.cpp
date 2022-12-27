//sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(mid == x/mid)
                return mid;
            else if(mid < x/mid)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
};

//class Solution{
//     public:
//     int mySqrt(int x){
//         long long y=0;
//         while(y*y<=x) y++;
//         return y-1
//     }
// }

/*
 class solution{
    public:
    int muSqrt(int x{
        
    })
 }
*/
