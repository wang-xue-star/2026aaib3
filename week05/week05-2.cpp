// week05-2.cpp 學習計畫 Built-in Function 第2題
// LeetCode 709. To Lover Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        // week02 教過字串 s 的長度 .length()
        for (int i=0; i < s.length(); i++) { // 逐字母處理
            if ( isupper(s[i]) ) s[i] = s[i] - 'A' + 'a';
        } // s[0] = 'h'; // 先試試看吧(看起來就是錯的) 教你 s[i]
        return s; // 竟然直接送出去
    }
};
