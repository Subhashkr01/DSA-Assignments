#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int high, low, highcnt=0, lowcnt=0;
    scanf("%d", &high);
    low = high;
    for (int i=0;i<n-1;i++)
    {
        int p;
        scanf("%d",&p);
        if (p > high)
        {
            high = p;
            highcnt ++;
        } 
        if (p < low)
        {
            low = p;
            lowcnt ++;
        }
    }
    printf("%d %d\n", highcnt, lowcnt);
}