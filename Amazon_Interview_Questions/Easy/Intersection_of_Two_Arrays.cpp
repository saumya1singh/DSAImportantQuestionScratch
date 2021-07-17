/*

Problem Link: https://leetcode.com/problems/intersection-of-two-arrays/

*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
      unordered_set<int>m(nums1.begin(), nums1.end());
      for(auto a: nums2){
        if(m.count(a)){
          res.push_back(a);
          m.erase(a);
        }
      }
      return res;
    }
};
