class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded = "";
        for (const std::string& str : strs)
            encoded += std::to_string(str.size()) + '#' + str;
        return encoded;
    }

    vector<string> decode(string s) {
        std::vector<std::string> decoded;
        int i = 0;
        
        while (i < s.size())
        {
            int j = i;
            
            while (s[j] != '#')
                j++;
            
            int len = stoi(s.substr(i, j - i));
            decoded.push_back(s.substr(j + 1, len));
            
            i = j + 1 + len; 
        }
        return decoded;
    }
};
