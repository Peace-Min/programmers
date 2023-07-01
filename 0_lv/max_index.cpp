#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int compare(int a,int b){
    return a>b;
}
int solution(vector<int> array) {
    vector<int> tmp(1001,0);
	for(auto v : array){
		tmp.at(v)++;
	}
    //array에서 최대 값 index 구하는 라이브러리 명령어
    //int max = *max_element(v.begin(), v.end()); 가장 큰 값구하기
    int max = max_element(tmp.begin(), tmp.end()) - tmp.begin();
    sort(tmp.begin(),tmp.end(),compare);
    if(tmp.at(0)==tmp.at(1))    return -1;
    return max;
}
