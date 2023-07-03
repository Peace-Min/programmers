#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> n) {
    vector<int> a;
    int i=n.size()-1;
    int j=0;
    for(;i>=0;i--,j++){
        a.push_back(n[i]);
    }
    return a;
}
