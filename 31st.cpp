#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ============================================================================
// 1. Generate all permutations of a given string using a bool function
//    (std::next_permutation returns true if the next permutation exists)
// ============================================================================
void generateAllPermutations(string s) {
    // Sort the string first to ensure we get ALL permutations in lexicographically increasing order
    sort(s.begin(), s.end());
    
    // next_permutation is a bool function that rearranges the string into the 
    // next lexicographically greater permutation. It returns false when no more exist.
    do {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));
}

// ============================================================================
// 2. Check if one string is a permutation (anagram) of another
// ============================================================================
bool isPermutation(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    
    vector<int> count(256, 0); // Assuming ASCII characters
    for (int i = 0; i < s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

// ============================================================================
// 3. Permutation in String (Sliding Window approach)
// Given two strings s1 and s2, return true if s2 contains a permutation 
// of s1 as a contiguous substring.
// ============================================================================
bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) {
        return false;
    }
    
    vector<int> s1Count(26, 0); // Assuming lowercase English letters
    vector<int> windowCount(26, 0);
    
    // Initialize the counts for the first window of length s1.length()
    for (int i = 0; i < s1.length(); i++) {
        s1Count[s1[i] - 'a']++;
        windowCount[s2[i] - 'a']++;
    }
    
    if (s1Count == windowCount) {
        return true;
    }
    
    // Slide the window over s2
    for (int i = s1.length(); i < s2.length(); i++) {
        windowCount[s2[i] - 'a']++;                   // Add new character to window
        windowCount[s2[i - s1.length()] - 'a']--;     // Remove oldest character from window
        
        if (s1Count == windowCount) {
            return true;
        }
    }
    
    return false;
}

int main() {
    cout << "--- 1. Generating Permutations (Using bool function) ---" << endl;
    string s = "abc";
    cout << "Permutations of '" << s << "':" << endl;
    generateAllPermutations(s);
    cout << "\n\n";

    cout << "--- 2. Checking if string is a permutation ---" << endl;
    string a = "listen";
    string b = "silent";
    cout << "'" << a << "' and '" << b << "' are permutations: " 
         << (isPermutation(a, b) ? "true" : "false") << endl;
    cout << "\n";

    cout << "--- 3. Permutation in String (Substring check) ---" << endl;
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << "'" << s2 << "' contains a permutation of '" << s1 << "': " 
         << (checkInclusion(s1, s2) ? "true" : "false") << endl;

    return 0;
}
