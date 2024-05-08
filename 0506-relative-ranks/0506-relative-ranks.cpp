class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> result = score;
        sort(result.begin(), result.end(), greater<int>());
        vector<string> medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        unordered_map<int, string> rankMapping;
        for(int i = 0; i < result.size(); i++)
        {
            if ( i < 3)
                rankMapping[result[i]] = medals[i];
            else 
                rankMapping[result[i]] = to_string(i + 1);
        }
        vector<string> answer;
        for(int s : score)
            answer.push_back(rankMapping[s]);
        return answer;
    }
};