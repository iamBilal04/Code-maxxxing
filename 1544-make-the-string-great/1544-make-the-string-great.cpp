class Solution {
public:
    string makeGood(string s) {
      vector<char> str;
        str.push_back(s[0]);
        for (int i = 1; i < s.size();i++){
            
            char topVal = str.back();
            
            if(!str.empty() && abs(topVal - s[i]) == 32){
                str.pop_back();
            }
            else str.push_back(s[i]);
        }
        string ans(str.begin(), str.end());
        return ans;
    }
};