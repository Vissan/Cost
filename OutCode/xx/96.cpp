class Solution {
public:
    int totalHammingDistance(vector<int> &nums) {
        int ans = 0, n = nums.size();
        for (int i = 0; i < 30; ++i) {
            int c = 0;
            for (int val : nums) {
                c += (val >> i) & 1;
            }
            ans += c * (n - c);
        }
        return ans;
    }
};

3 3 n 1 96.cpp
