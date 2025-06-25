#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int countPrefix;
    Node* children[26];

    Node(){
        countPrefix = 0;
        for(int i = 0; i < 26; i++){
            children[i] = nullptr;
        }
    }

    ~Node(){
        for(auto ch: children){
            delete ch;
        }
    }
};

class Trie{
    public:
    Node* root;

    Trie(){
        root = new Node();
    }

    void insert(string word){
        Node* node = root;

        for(auto it: word){
            int index = it - 'a';
            if(node -> children[index] == nullptr)
                node->children[index] = new Node();
            node = node ->children[index];
            node ->countPrefix++;    
        }
    }

    int prefixCount(string word){
        Node* node = root;

        for(auto it: word){
            int index = it - 'a';
            if(node -> children[index] == nullptr)
                return 0;
            node = node ->children[index];
        }

        return node ->countPrefix;
    }

    ~Trie(){
        delete root;
    }
};

int main(){
    Trie trie;
    trie.insert("abcdef");
    trie.insert("ghij");
    trie.insert("ewrreter");
    trie.insert("abcd");

    cout<<trie.prefixCount("abcd");
    return 0;
}
