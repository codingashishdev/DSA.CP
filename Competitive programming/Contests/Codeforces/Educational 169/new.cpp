class Solution
{
public:
    long long beauty(string s)
    {
        long long freq[26] = {0};
        for (long long i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }

        long long maxFreq = long long_MIN;
        long long minFreq = long long_MAX;

        for (long long i = 0; i < 26; i++)
        {
            maxFreq = max(freq[i], maxFreq);
            if (freq[i] < minFreq && freq[i] != 0)
            {
                minFreq = freq[i];
            }
        }

        return abs(maxFreq - minFreq);
    }

    long long beautySum(string s)
    {
        long long ans = 0;
        for (long long i = 0; i < s.size(); i++)
        {
            for (long long len = 1; len <= s.size() - i; len++)
            {
                string temp = s.substr(i, len);
                if (temp.size() >= 3)
                {
                    ans += beauty(temp);
                }
            }
        }
        return ans;
    }
};