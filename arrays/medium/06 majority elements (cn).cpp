int majorityElement(vector<int> arr) {
	// Write your code here
	        int n = arr.size();
        int kingPower = 1;
        int king = arr[0];
        for(int i = 1 ; i<n ;i++){
            if(arr[i]==king) kingPower++;
            else{
                kingPower--;
                if(kingPower == 0){
                king = arr[i];
                kingPower++;
            }
            }

        }
        return king;
    }
}