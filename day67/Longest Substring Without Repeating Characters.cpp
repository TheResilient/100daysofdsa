#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> hash;
    int max_len = 0;
    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (hash.find(s[i]) != hash.end()) {
            start = max(start, hash[s[i]] + 1);
        }
        hash[s[i]] = i;
        max_len = max(max_len, i - start + 1);
    }
    return max_len;
}