#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my) {
    string answer;
    int cnt=0;
    for(int i=my.length()-1;i>=0;i--,cnt++){
        answer.push_back(my[i]);
    }
    return answer;
}
