class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        std::unordered_map<string, vector<string>> groups;
        
        // for (const auto& str : strs)
        // {
        //     int count[26] = {0};
        //     for (const auto& c : str)
        //         count[c - 'a']++;

        //     string key;
        //     for (int i = 0; i < 26; i++)
        //         key += to_string(count[i]) + '#';

        //     groups[key].push_back(str);
        // }

        // for (const auto& [key, group] : groups)
        //     ans.push_back(group);


        for (const auto& s : strs)
        {
            string key = s;
            sort(key.begin(), key.end());

            groups[key].push_back(s);
        }

        for (const auto& [key, group] : groups)
            ans.push_back(group);

        return ans;


    }
};
