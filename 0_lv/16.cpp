#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int price) {
    int m=price;
    if( (price/100000) < 1) return m;
    switch(price/100000){
        case 1:
        case 2:
            m=price*0.95;
            break;
        case 3:
        case 4:
            m=price*0.9;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            m=price*0.8;
            break;
    }
    return m;
}
