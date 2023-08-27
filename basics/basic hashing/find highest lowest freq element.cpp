vector<int> getFrequencies(vector<int> &arr) {
  // Write Your Code Here
  map<int, int> mpp;
  // iterate over arr
  for (int i = 0; i < arr.size(); i++){
      auto it = mpp.find(arr[i]);
      if(it == mpp.end())
        mpp.insert({arr[i],1});
        else{
            it->second++;
        }
  }
    int maxR = INT_MIN;
    int minR = INT_MAX;
    vector<int> maxOnes;
    vector<int> minOnes;
  // finding the max one
  for(auto it : mpp){
    if(it.second >= maxR){
        maxR = it.second;
    }
    if(it.second <= minR){
        minR = it.second;
    }
  }

  // filling maxOnes and minOnes
  for(auto it : mpp){
      if(it.second == maxR) maxOnes.push_back(it.first);
      if(it.second == minR) minOnes.push_back(it.first);
  }

  int maxA = INT_MAX;
  int minA = INT_MAX;
  for(int i : maxOnes){
      maxA = min(maxA,i);
  }

   for(int i : minOnes){
      minA = min(minA,i);
  }


    return {maxA,minA};




}