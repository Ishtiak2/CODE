#include <bits/stdc++.h>
using namespace std;

struct State {
    int len, link;
    unordered_map<char, int> next;
};

const int MAXN = 2e5;
State st[2 * MAXN];
int sz, last;

void sa_init() {
    st[0].len = 0;
    st[0].link = -1;
    sz = 1;
    last = 0;
}

void sa_extend(char c) {
    int cur = sz++;
    st[cur].len = st[last].len + 1;
    int p = last;
    while (p != -1 && !st[p].next.count(c)) {
        st[p].next[c] = cur;
        p = st[p].link;
    }
    if (p == -1) {
        st[cur].link = 0;
    } else {
        int q = st[p].next[c];
        if (st[p].len + 1 == st[q].len) {
            st[cur].link = q;
        } else {
            int clone = sz++;
            st[clone].len = st[p].len + 1;
            st[clone].next = st[q].next;
            st[clone].link = st[q].link;
            while (p != -1 && st[p].next[c] == q) {
                st[p].next[c] = clone;
                p = st[p].link;
            }
            st[q].link = st[cur].link = clone;
        }
    }
    last = cur;
}

long long count_distinct_substrings(string s) {
    sa_init();
    for (char c : s) sa_extend(c);
    long long res = 0;
    for (int i = 1; i < sz; i++) {
        res += st[i].len - st[st[i].link].len;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << count_distinct_substrings(s) << endl;
    return 0;
}
