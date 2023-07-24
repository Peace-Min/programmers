#include <string>
#include <vector>

using namespace std;

string solution(string my, int n) {
    string answer = "";
    for(int i=0;i<my.length();i++){
        for(int j=0;j<n;j++){
            answer.push_back(my.at(i));
        }
    }
    return answer;
}
