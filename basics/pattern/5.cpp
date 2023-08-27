class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i = 1; i<= n; i++){
	        for(int j = n+1-i ; j>=1 ; j--){
	            cout<<"* ";
	        }
	        cout<<endl;
	    }
	}
};