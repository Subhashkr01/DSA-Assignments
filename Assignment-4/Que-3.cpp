#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, a, b, m, n;
    scanf("%d %d %d %d %d %d", &s, &t, &a, &b, &m, &n);
    int cntapple = 0, cntorange = 0;
    for (int i=0; i<m; i++)
    {
        int d;
        scanf("%d", &d);
        if (a+d >= s && a+d <= t)
            cntapple ++;
    }
    for (int i=0; i<n; i++)
    {
        int d;
        scanf("%d", &d);
        if (b+d >= s && b+d <= t)
            cntorange ++;
    }
    printf("%d\n%d\n", cntapple, cntorange);
    return 0;
}
