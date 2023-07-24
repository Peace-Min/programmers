#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(int i=0;i<my_string.size();i++){
        if(my_string.at(i)==letter.at(0))	continue;
        answer.push_back(my_string.at(i));
    }
    return answer;
}
