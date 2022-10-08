#include<bits/stdc++.h>
using namespace std;
int main() {
    int xa, va, xb, vb;
    scanf("%d %d %d %d", &xa, &va, &xb, &vb);
    printf("%s\n", (va > vb && (xb - xa) % (va - vb) == 0)?"YES":"NO");
    return 0;
}