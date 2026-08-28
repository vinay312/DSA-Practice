class Solution {

    private:

    static bool compare(pair<char, int>& a, pair<char, int>& b) {

      
        if (a.second != b.second)
            return a.second > b.second;

    
        return a.first < b.first;
    }
    public:
        string frequencySort(string s) {


        int freq[128] = {0};

        for (char ch : s) {
            freq[ch]++;
        }


        vector<pair<char, int>> v;

        for (int i = 0; i < 128; i++) {

            if (freq[i] > 0) {

                char ch = i;
                v.push_back({ch, freq[i]});
            }
        }


        sort(v.begin(), v.end(), compare);


        string ans = "";

        for (auto p : v) {

            ans.append(p.second, p.first);
        }

        return ans;
        
    }
};