class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;
    
    // Sort the balloons based on their end points
    sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });
    
    int arrows = 1; // At least one arrow is needed
    int end = points[0][1]; // End point of the first balloon
    
    for (int i = 1; i < points.size(); ++i) {
        // If the current balloon's start point is beyond the end point of previous balloon,
        // it cannot be burst by the same arrow, so we need another arrow
        if (points[i][0] > end) {
            ++arrows;
            end = points[i][1]; // Update the end point
        }
    }
    
    return arrows;
    }
};