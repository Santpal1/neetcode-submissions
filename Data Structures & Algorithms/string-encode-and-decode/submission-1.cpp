class Solution {
   public:
    string encode(vector<string>& strs) {
        string encodedstr = "";
        for (int i = 0; i < strs.size(); ++i) {
            string curr = strs[i];
            int currsize = curr.size();
            encodedstr += to_string(currsize) + "#" + curr;
        }
        return encodedstr;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strings;
        int i = 0;
        while (i < s.size()) {
            int currsize = 0;
            while (s[i] != '#') {
                currsize = currsize * 10 + (s[i] - '0');
                i++;
            }
            i++;
            string currword = "";
            while (currsize--) {
                currword += s[i++];
            }
            decoded_strings.push_back(currword);
        }
        return decoded_strings;
    }
};
