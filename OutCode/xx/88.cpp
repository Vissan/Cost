class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> st;
        for (auto &num : arr) {
            if (st.empty() || num >= st.top()) {
                st.emplace(num);
            } else {
                int mx = st.top();
                st.pop();
                while (!st.empty() && st.top() > num) {
                    st.pop();
                }
                st.emplace(mx);
            }
        }
        return st.size();
    }
};

3 3 n n 88.cpp
