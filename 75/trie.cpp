
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Trie {
public:
    Trie() {
       map<string,bool>table;
    }
    
    void insert(string word) {
      int n=word.size();
       for(int i=0;i<n;i++){
         self.table[word.substr(0,i+1)]
       } 
    }
    
    bool search(string word) {
        
    }
    
    bool startsWith(string prefix) {
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
