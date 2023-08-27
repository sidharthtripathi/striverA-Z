void bubbleSort(vector<int>&arr, int n) 
{
    //write your code here
    for(int i = n-1 ; i>=1 ; i--){
        for(int j = 1 ; j<=i ; j++){
            if(arr[j-1]>=arr[j]){
                // swap them
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}