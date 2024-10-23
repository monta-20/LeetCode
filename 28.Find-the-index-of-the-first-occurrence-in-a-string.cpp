class Solution {
public:
    int strStr(string haystack, string needle) {
        // If the needle is larger than the haystack, return -1
        if (needle.size() > haystack.size()) return -1;
        
        // Loop through the haystack where there is enough room for the needle
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            // Check if the substring of the same length as the needle matches
            if (haystack.substr(i, needle.size()) == needle) {
                return i; // Return the starting index if found
            }
        }
        
        // If no match is found, return -1
        return -1;
    }
};
