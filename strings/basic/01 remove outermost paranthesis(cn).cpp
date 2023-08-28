int maxDepth(string s) {
	// Write your code here.
	int count = 0;
	int maxCount = INT_MIN;
	for(int i = 0 ; i<s.length() ; i++){
		if(s[i]=='(') count++;
		else if(s[i]==')') count--;
		maxCount = max(count,maxCount);
	}
	return maxCount;
	
}
