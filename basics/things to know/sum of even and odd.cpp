#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int eSum = 0;
	int oSum = 0;
	int n; cin>>n;
	while(n>0){
		int lastDigi = n%10;
		n = n/10;
		if(lastDigi % 2==0) eSum = eSum + lastDigi;
		else oSum = oSum + lastDigi;
	}
	cout<<eSum<<" "<<oSum;
	
}
