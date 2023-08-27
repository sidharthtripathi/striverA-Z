string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(),book.end());
    int i = 0 , j = n-1;
    while(i<j){
        if(book[i]+book[j]>target)
            j--;
        else if(book[i] + book[j] < target)
            i++;
        else return "YES";
    }
    return  "NO";
}
