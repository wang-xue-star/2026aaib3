// week05-3b.cpp 學習計畫 Built-in Function 第1題
// LeetCode 58. Length of Last Word 最後那個字, 有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string ans;
        while (ss >> ans) { // 今天 week05-1.cpp 有用到
            // 甚麼都不做
        }
        return ans.length(); // 先試試看 (還沒有正確)
    }
};
