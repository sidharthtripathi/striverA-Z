class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
         		vector <int> temp = num;
        sort(temp.begin(), temp.end());
        vector <int> index;
        int val1, val2;
        int i = 0, j = temp.size()-1;
        while(i<j){
            if(temp[i] + temp[j] == target){
                val1 = temp[i];
                val2 = temp[j];
                break;
            }
            else if(temp[i]+temp[j]>target)
            j--;
            else
            i++;
        }
        for(int i = 0 ; i<num.size() ; i++){
        	if(num[i]==val1){
            index.push_back(i);
            break;
            }    
        }
        for(int i = 0 ; i<num.size() ; i++){
            if(num[i]==val2 and i!=index.back()){
                index.push_back(i);
                break;
            }
            
        }
        
        return index;
    }
};