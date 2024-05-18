class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool counting = false;
        reverse(s.begin(), s.end());
        
        for(int i = 0; i < s.length(); i++){
           if(s[i] != ' '){
               count++;
               counting = true;
           }
            
            else if (counting){
                break;
            }
        }
        return count;
    }
    
};