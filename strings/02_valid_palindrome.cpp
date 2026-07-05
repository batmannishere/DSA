lass Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            // move i forward if not alphanumeric
            while (i < j && !isalnum(s[i])) {
                i++;
            }

            // move j backward if not alphanumeric
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            // compare in lowercase
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};