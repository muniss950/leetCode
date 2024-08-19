
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <strings.h>
#include <vector>

using namespace std;
class Trie {
public:
  map<string, bool> sarch;
  map<string, bool> start;

  Trie() {
  }

  void insert(string word) {
    sarch[word]=true;
    int n = word.size();
    for (int i = 0; i < n; i++) {
      start[word.substr(0, i + 1)]=true;
    }
    // for(auto i:table){
    //   cout<<i.first<<": "<<i.second<<endl;
    // }
  }

  bool search(string word) {
    return sarch[word];
  }

  bool startsWith(string prefix) {
    return start[prefix];

  }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
