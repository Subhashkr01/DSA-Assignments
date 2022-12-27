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

/*
class Solution{
    public:
    int arrangeCoins(int n){
        return (int)(math.sqrt(2*(long)n + 0.25) - 0.5);
    }
}
*/