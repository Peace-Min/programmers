#include <string>
#include <vector>

using namespace std;

double solution(vector<int> n) {
    double a = 0;
    for(int i=0;i<n.size();i++){
        a+=n[i];
    }
    return a/n.size();
}
