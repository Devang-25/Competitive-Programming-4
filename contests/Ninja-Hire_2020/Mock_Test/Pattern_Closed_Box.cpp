// https://github.com/ABHISHEK-G0YAL/Competitive-Programming/blob/master/contests/Ninja-Hire_2020/Mock_Test/Pattern_Closed_Box.md

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << string(n, '#') << endl;
    for(int i = 0; i < n - 2; i++)
    	cout << '*' << string(n - 2, ' ') << '*' << endl;
    cout << string(n, '#') << endl;
}