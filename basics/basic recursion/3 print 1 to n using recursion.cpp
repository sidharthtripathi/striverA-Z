vector<string> printNTimes(int n) {
	// base case
	if(n==1){
		return {"Coding Ninjas"};
	}
	vector<string> halfAns = printNTimes(n-1);
	halfAns.push_back("Coding Ninjas");
	return halfAns;
}