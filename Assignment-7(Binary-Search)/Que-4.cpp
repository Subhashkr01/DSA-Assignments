//first-bad-version

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isBadVersion(mid) == true){
                if(mid == 1 || isBadVersion(mid-1) == false)
                    return mid;
                else
                    high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return -1;
    }
};