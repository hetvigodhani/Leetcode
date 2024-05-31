class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> mapST;
        unordered_set<char> mappedChars;

        for (size_t i = 0; i < s.length(); ++i) {
            char c1 = s[i], c2 = t[i];

            // Check if there's an existing mapping for c1
            if (mapST.count(c1)) {
                if (mapST[c1] != c2)
                    return false; // Mismatch in expected mapping
            } else {
                // Check if c2 is already mapped to some other character
                if (mappedChars.count(c2))
                    return false; // c2 is already mapped to a different character

                // Create the mapping
                mapST[c1] = c2;
                mappedChars.insert(c2);
            }
        }

        return true;
    }
};