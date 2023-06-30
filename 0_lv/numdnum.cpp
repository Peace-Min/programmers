#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n1, int d1, int n2, int d2) {
    vector<int> m(2);
    m[0]=n1*d2+n2*d1;
    m[1]=d1*d2;
    for(int i=min(m[0],m[1]);i>=2;i--){
        if( (m[0] % i ==0) && (m[1] % i) ==0){
            m[0]/=i;
            m[1]/=i;
            break;
        }
    }
    return m;
}

