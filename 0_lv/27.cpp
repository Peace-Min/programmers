#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    for(int i=0;num1<=num2;num1++,i++){
        answer[i]=numbers[num1];
    }
    return answer;
}
