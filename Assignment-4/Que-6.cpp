#include<bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    int moves;
    cin >> str1 >> str2 >> moves;
    int i;
    for (i = 0; i < min(str1.size(), str2.size()); i++)
        if (str1[i] != str2[i])
            break;
    int diff = str1.size() - i + str2.size() - i;
    if (moves >= str1.size() + str2.size() || (moves >= diff && (moves - diff) % 2 == 0) )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;