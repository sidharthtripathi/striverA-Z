#include <set>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> ans;
    set<int>mySet;
    for(int i = 0 ; i<a.size() ;i++){
        if(mySet.find(a[i])==mySet.end()) mySet.insert(a[i]);
    }
    for(int i = 0 ; i<b.size() ;i++){
        if(mySet.find(b[i])==mySet.end()) mySet.insert(b[i]);
    }
    // iterate over set and make vector
    for(auto i : mySet){
        ans.push_back(i);
    }
    return ans;
}