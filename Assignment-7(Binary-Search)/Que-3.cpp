//arranging-coins

class Solution {
public:
    int arrangeCoins(int n) {
         int ans = 0;
        while((ans+1)*1LL*(ans+2)<=(long long)n*2){
            ans++;
        }
        return ans;
    }
};