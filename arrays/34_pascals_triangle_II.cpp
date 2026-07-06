// GENERATE TRAINGLE TILL THAT ROW
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;

        long long element = 1;
        ans.push_back(1);

        for (int i = 1; i <= rowIndex; i++) {
            element = element * (rowIndex - i + 1);
            element = element / i;
            ans.push_back(element);
        }

        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans1;

        for (int i = 0; i < numRows; i++) {
            ans1.push_back(getRow(i));
        }

        return ans1;
    }
};