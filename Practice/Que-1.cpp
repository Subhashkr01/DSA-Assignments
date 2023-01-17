// A pangram is a string that contains every letter of the alphabet.Given a sentence determine whether it is a pangram in the 
// English alphabet.Ignore case.Return either pangram or not pangram as appropriate.


#include <bits/stdc++.h>
using namespace std;


    string pangrams(string s) {
    // Convert the string to lowercase and create a set of its characters
    set<char> s_lower;
    transform(s.begin(), s.end(), inserter(s_lower, s_lower.begin()),tolower);
    // Create a set of the alphabet
    set<char> alphabet {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // Check if the alphabet is a subset of the string's characters
    if (includes(s_lower.begin(), s_lower.end(), alphabet.begin(), alphabet.end())) {
        return "pangram";
    } else {
        return "not pangram";
    }
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
