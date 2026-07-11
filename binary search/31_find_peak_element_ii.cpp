class Solution {
public:
    // Returns the row index of the maximum element in a given column
    int maxElement(vector<vector<int>>& mat, int col) {
        int n = mat.size();
        int row = 0;

        for (int i = 1; i < n; i++) {
            if (mat[i][col] > mat[row][col]) {
                row = i;
            }
        }

        return row;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Row having maximum element in the middle column
            int row = maxElement(mat, mid);

            int left = (mid - 1 >= 0) ? mat[row][mid - 1] : -1;
            int right = (mid + 1 < m) ? mat[row][mid + 1] : -1;

            // Found a peak
            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            }
            // Move left
            else if (left > mat[row][mid]) {
                high = mid - 1;
            }
            // Move right
            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};