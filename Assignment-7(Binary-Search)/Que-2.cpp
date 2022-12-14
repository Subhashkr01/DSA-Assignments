//guess-number-higher-or-lower

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(guess(mid) == 0)
                return mid;
            else if(guess(mid) == 1)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};

