class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int si=0;
        int ei=0;
        int n = s.length();
        int vCount = 0;
        int ans = 0;

        while(ei<n){
            if(isVowel(s[ei++])){
                vCount++;
            }

            if(ei-si == k){
                ans = max(ans, vCount);
                if(isVowel(s[si++])){
                    vCount--;
                }
            }
        }
        return ans;
    }
};