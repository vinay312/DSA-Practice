class Solution {

    private:

    static bool compare(pair<char, int>& a, pair<char, int>& b) {

        // Higher frequency comes first
        if (a.second != b.second)
            return a.second > b.second;

        // If frequencies are same, alphabetical order
        return a.first < b.first;
    }
    public:
        string frequencySort(string s) {

        // Step 1: Count frequencies
        int freq[128] = {0};

        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Store (character, frequency) pairs
        vector<pair<char, int>> v;

        for (int i = 0; i < 128; i++) {

            if (freq[i] > 0) {

                char ch = i;
                v.push_back({ch, freq[i]});
            }
        }

        // Step 3: Sort according to comparator
        sort(v.begin(), v.end(), compare);

        // Step 4: Build answer
        string ans = "";

        for (auto p : v) {

            ans.append(p.second, p.first);
        }

        return ans;
        
    }
};