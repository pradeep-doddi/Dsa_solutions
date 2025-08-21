class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0; // Handle empty height vector

        int ans = 0;
        vector<int> left(n);  // Pre-size left vector
        vector<int> right(n); // Pre-size right vector

        // Populate left array (max height to the left, including current)
        left[0] = height[0];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], height[i]);
        }

        // Populate right array (max height to the right, including current)
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) { // Iterate from right to left
            right[i] = max(right[i + 1], height[i]);
        }

        // Calculate trapped water
        for (int i = 0; i < n; i++) {
            // The amount of water trapped at index i is min(left_max, right_max) - height[i]
            ans += min(left[i], right[i]) - height[i];
        
       
    }
     for(auto i:left){
            cout<<i<<" ";
        }
        
    return ans;
    }
};