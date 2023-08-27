bool checkArmstrong(int n){
	//Write your code here
	// count digits
	
	int tempN = n;
	int digits = 0;
	while(tempN>0){
		tempN = tempN / 10;
		digits ++;
	}
	tempN = n;
	int sum = 0;
	while(tempN>0){
		int lastDigi = tempN%10;
		tempN = tempN /10;
		sum = sum + pow(lastDigi,digits);

	}

	return n==sum;

}
