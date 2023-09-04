void travel(int index,vector<int> &num, int ssf, vector<int> &ans){
	if(index==num.size()){
		ans.push_back(ssf);
		return;
	}
	// pick the ith index
	travel(index+1,num,ssf+num[index],ans);
	// not pick ith index
	travel(index+1,num,ssf,ans);


}
vector<int> subsetSum(vector<int> &num){
	vector<int> ans;
	travel(0,num,0,ans);
	sort(ans.begin(),ans.end());
	return ans;
}