#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int r = 1;
    while(1){
        if( slice*r>= n) return r;
        r++;
    }
    return r;
}
