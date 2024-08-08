// 1071 solution
// Greatest Common Divisor of Strings
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if str1 + str2 equals str2 + str1
        if (str1 + str2 != str2 + str1) {
            return ""; // There is no common divisor string
        }
        
        // Calculate the GCD of the lengths of the strings
        int gcdLength = gcd(str1.size(), str2.size());
        
        // Return the substring of str1 up to the GCD length
        return str1.substr(0, gcdLength);
    }
    
private:
    // Helper function to compute the GCD of two numbers
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
