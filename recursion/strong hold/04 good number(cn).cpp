bool good(int a , int d){
	int last = a%10;
	if(last == d) return false;
	a = a/10;
	int sum = last;
	while(a>0){
		if(a%10 == d) return false;
		if((a%10)<=sum) return false;
		sum = sum + (a%10);
		a = a /10;
	}
	return true;

}
vector<int> goodNumbers(int a, int b, int digit) {
	// Write your code here.
	vector<int> ans;
	for(int i = a  ; i<=b ; i++){
		if(good(i,digit)) ans.push_back(i);
	}
	return ans;
}