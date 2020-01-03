class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int n = arr.size();
        multimap<int, int> mp;
        
        for(int i=0;i<n;i++){
            mp.insert(make_pair(abs(arr[i]-x), arr[i]));
        }
        vector<int> ans;
        
        int i=0;
        for(auto itr = mp.begin(); i<k ; i++,itr++){
            
            ans.push_back(itr->second);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};