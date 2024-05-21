class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // Initialize an array to count occurrences of characters in s1
        int count1[26] = {0};
        
        // Count occurrences of characters in s1
        for (int i = 0; i < s1.length(); i++) {
            count1[s1[i] - 'a']++;
        }
        
        // Length of the window
        int window = s1.length();
        
        // Initialize an array to count occurrences of characters in the current window of s2
        int count2[26] = {0};
        
        // Initialize a pointer to traverse s2
        int i = 0;
        
        // Count occurrences of characters in the first window of s2
        while (i < window && i < s2.length()) {
            count2[s2[i] - 'a']++;
            i++;
        }
        
        // Check if the counts of characters in the first window of s2 match those in s1
        if (equal(count1, count2)) return true;
        
        // Slide the window over s2 and check for permutations of s1
        while (i < s2.length()) {
            count2[s2[i] - 'a']++;
            count2[s2[i - window] - 'a']--;
            if (equal(count1, count2)) return true;
            i++;
        }
        
        // No permutation of s1 found in s2
        return false;
    }

    // Helper function to check if two arrays are equal
    bool equal(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
};