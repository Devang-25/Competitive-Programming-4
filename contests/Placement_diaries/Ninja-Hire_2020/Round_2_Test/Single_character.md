# Single character

Ninja got a string S (consists of lower case alphabets ‘a’-’z’ ) from one of his friends for his birthday but Ninja prefers the string which consists of only one type of character like “aaaa” , ”bbbbb” , “ccc” but not “aabc” ,”bcde” as they contain more than one type of character. So he wants to change the string S such that it contains only one type of character. If multiple strings exist he want the one which has the maximum length and if two strings have the same length he wants one which contains a lexicographically smaller character than the other.

For example S=”aaaabbbb” output will be “aaaa” not “bbbb” because ‘a’ is lexicographically smaller than ‘b’.

### Input format:
    First line of input will contain T (number of test-cases).
    Each test-case will contain a string S.

### Constraints:
    1<=T<=10^5
    1<=|S|<=10^5
    The sum of the length of string S over all test cases will not exceed 10^6.

### Output format:
    For each test-case, output the final string S in the new line.

### Sample Input 1:
    3
    abc
    cdess
    loss

### Sample Output 1:
    a
    ss
    ss

# Solution
```cpp
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    int t, mp[26], mx, mxc, i;
    string s;
    char c;
    cin >> t;
    while(t--) {
        memset(mp, 0, sizeof(mp));
        cin >> s;
        for(c : s)
            mp[c - 'a'] += 1;
        mx = 0;
        mxc = -1;
        for(i = 0; i < 26; i++) {
            if(mp[i] > mx) {
                mx = mp[i];
                mxc = i;
            }
        }
        while(mx--)
            cout << char(mxc + 'a');
        cout << endl;
    }
    return 0;
}
```