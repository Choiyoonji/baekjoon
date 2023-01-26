#include<iostream>
#include<queue>
#include<string>
using namespace std;
queue<int> q;
string n;
int a;
int main(){
	cin>>a;
	cin>>n;
	for(int i=0;i<a;i++){
		int tmp=(int)n.at(i)-48;
		q.push(tmp);
	}
	while(q.size()!=0){
		cout<<q.front();
		q.pop();
		if(q.size()!=0&&q.size()%3==0) printf(",");
	}
	return 0;
}
