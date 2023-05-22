class Solution {
public:
vector<int> sort(map<int, int>& M,int k)
{
    multimap<int, int> MM;
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
    for (auto& it : MM) {
        cout << it.second << ' ' << it.first << endl;
    }
    vector<int>res;
    int cnt=0;
      for (auto i = MM.rbegin(); i != MM.rend(); ++i) {
          if(cnt==k) break;
          else{
              res.push_back(i->second);
              cnt++;
          }
    }
    return res;
}
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
      return sort(mpp,k); 
    }
};