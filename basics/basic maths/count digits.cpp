int countDigits(int n){
	// Write your code here.
	int tempN = n;
	int count = 0;
	while(tempN>0){
		int lastDigi = tempN %10;
		if(lastDigi != 0)
		if(n%lastDigi == 0) count++;
		tempN = tempN / 10;

	}	
	return count;
}