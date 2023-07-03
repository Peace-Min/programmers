#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int a = 1;
    int n=2022;
    while(a!=age){
        n--;
        a++;
    }
    return n;
}
