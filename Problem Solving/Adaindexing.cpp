#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

class Node{
    public:

    int countPrefix;
    Node* children[26];

    Node() {
        for(int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        countPrefix = 0;
    }
};

class Trie{
    public:
    Node* root = nullptr;

    Trie() {
        root = new Node();
    }

    void insert(string word){
        Node* node = root;

        for(auto c : word){
            int index = c - 'a';
            
            if(node->children[index] == nullptr)
                node->children[index] = new Node();

            node = node -> children[index];
            node->countPrefix++;
   
        }
    }

    

    int countPref(string prefix){
        Node* node = root;

        for(char c : prefix){
            int index = c - 'a';
            if(node -> children[index] == nullptr) return 0;

            node = node -> children[index];
        }

        return node->countPrefix;
    }

};

int main()
{
    optimize();
    ll n,q;
    cin >> n >> q;

    Trie todo;
    string str;
    int count = 0;

    //vector<Trie> todo(n);
    //vector<string> query(q);
    for(int i = 0 ; i<n; i++)
    {
        cin >> str;
        todo.insert(str);
    }

    for(int i = 0; i < q; i++)
    {
        cin >> str;
        cout <<todo.countPref(str) << endl;
    }


    return 0;
}