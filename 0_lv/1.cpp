#include <iostream>
#include <string>
#include <vector>

using namespace std;
int q(int a,int b){
	if(a==0 || b ==0)	return 0;
	return a/b;
}
int main(){
	cout<<q(10,5)<<endl;	
}
