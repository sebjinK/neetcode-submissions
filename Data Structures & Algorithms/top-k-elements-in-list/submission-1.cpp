class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> counts;
        vector<int> ans; 
        for (int& num : nums)
            counts[num]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& [num, count] : counts)
            buckets[count].push_back(num);

        for (int i = buckets.size() - 1; i >= 0 && ans.size() < k; i--)
        {
            for (const auto& num : buckets[i])
            {
                ans.push_back(num);
                if (ans.size() == k)
                    break;
            }
        }
        return ans;
    }
};
