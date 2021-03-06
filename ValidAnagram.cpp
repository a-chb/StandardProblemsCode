Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Examples:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

  
  ||--------------------------------------------Solution--------------------------------------------||


Runtime: 12 ms, faster than 28.88% of C++ online submissions for Valid Anagram.
Memory Usage: 7.2 MB, less than 77.97% of C++ online submissions for Valid Anagram.

Time Complexity O(n*log(n))
Space Complexity O(1).
  
  ||--------------------------------------------Code Begins--------------------------------------------||
#Approch: 01

if (s.size() != t.size())
             return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);



#Approch: 02

int n = s.length(),m = t.length();
        if(n!=m) return false;
        unordered_map<char,int> mp(26);
        for(auto x: s) mp[x]++;
        for(auto x: t) mp[x]--;
        for(auto x: mp){
            if(x.second > 0) return false;
        }
        return true;
