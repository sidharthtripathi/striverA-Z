void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i = 0 ; i<n-1 ; i++){
        // assume array to be sorted till ith index
        for(int j = i+1 ; j>=1 ; j--){
            if(arr[j]<=arr[j-1]){
                // swap them
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else break;
        }
    }
}