class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length())
            return false;
        
        // std::unordered_map<char, int> seen;

        // for (int i = 0; i < s.length(); i++)
        // {
        //     if (seen.contains(s[i]))
        //         seen[s[i]] += 1;
        //     else
        //         seen[s[i]] = 1;
        // }

        // for (int i = 0; i < t.length(); i++)
        // {
        //     if (seen.contains(t[i]))
        //         seen[t[i]] -= 1;
        //     else
        //         return false;
        // }

        // for (const auto& [key, value] : seen)
        // {
        //     if (value != 0)
        //         return false;
        // }

        // return true;

        vector<int> seen (26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            seen[s[i] - 'a']++;
            seen[t[i] - 'a']--;
        }

        for (int val : seen)
        {
            if (val != 0)
                return false;
        }
        return true;
    }
};
