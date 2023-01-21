https://leetcode.com/problems/minimum-common-value/solutions/

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int>map1, map2;
        for (int i = 0; i < nums1.size(); i++) map1[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++) mpa2[nums2[i]]++;
        for (auto c : map1) {
            if (map2[c.first] > 0) return c.first;
        }
        return -1;
    }
};
            
        
