#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// ============================================================================
// 1. Reverse the order of words in a string 
//    (e.g., "the sky is blue" -> "blue is sky the")
//    O(N) Time, O(1) Space (In-place reversal)
// ============================================================================
string reverseWords(string s) {
    // Reverse the entire string first
    reverse(s.begin(), s.end());
    
    int n = s.length();
    int idx = 0;
    
    for (int start = 0; start < n; ++start) {
        if (s[start] != ' ') {
            // Found the start of a word
            if (idx != 0) {
                s[idx++] = ' '; // Add space before the word (if it's not the first word)
            }
            
            int end = start;
            while (end < n && s[end] != ' ') {
                s[idx++] = s[end++];
            }
            
            // Reverse the word in place to correct its character order
            reverse(s.begin() + idx - (end - start), s.begin() + idx);
            
            // Move start pointer to end of this word
            start = end;
        }
    }
    
    // Resize the string to remove any trailing spaces
    s.resize(idx);
    return s;
}

// ============================================================================
// 2. Simpler approach using StringStream 
//    O(N) Time, O(N) Space (easier to read but uses extra memory)
// ============================================================================
string reverseWordsStream(string s) {
    stringstream ss(s);
    string word, result = "";
    
    // ss >> word automatically skips multiple spaces
    while (ss >> word) {
        if (result.empty()) {
            result = word;
        } else {
            result = word + " " + result;
        }
    }
    
    return result;
}

int main() {
    string str1 = "  the sky is blue  ";
    string str2 = "a good   example";
    
    cout << "--- Approach 1: In-Place O(1) Space ---" << endl;
    cout << "Original: '" << str1 << "'" << endl;
    cout << "Reversed: '" << reverseWords(str1) << "'" << endl;
    cout << "\n";
    
    cout << "--- Approach 2: StringStream O(N) Space ---" << endl;
    cout << "Original: '" << str2 << "'" << endl;
    cout << "Reversed: '" << reverseWordsStream(str2) << "'" << endl;
    
    return 0;
}
