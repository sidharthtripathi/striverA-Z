class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i<=n ; i++){
            for(int j = 1 ; j<=i ; j++){
            cout<<j<<" ";
                
            }
            cout<<endl;
        }
    }
};