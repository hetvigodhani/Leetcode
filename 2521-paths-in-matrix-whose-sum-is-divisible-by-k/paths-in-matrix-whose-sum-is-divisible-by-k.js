/**
 * @param {number[][]} grid
 * @param {number} k
 * @return {number}
 */
var numberOfPaths = function(grid, k) {
    const MOD = 10**9 + 7;
    const m = grid.length;
    const n = grid[0].length;
    
    // Create 3D DP array
    const dp = new Array(m);
    for (let i = 0; i < m; i++) {
        dp[i] = new Array(n);
        for (let j = 0; j < n; j++) {
            dp[i][j] = new Array(k).fill(0);
        }
    }
    
    // Initialize start position
    dp[0][0][grid[0][0] % k] = 1;
    
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            for (let r = 0; r < k; r++) {
                if (i === 0 && j === 0) {
                    continue; // already set
                }
                const currentVal = grid[i][j];
                if (i > 0) {
                    const prevRem = (r - currentVal % k + k) % k;
                    dp[i][j][r] = (dp[i][j][r] + dp[i-1][j][prevRem]) % MOD;
                }
                if (j > 0) {
                    const prevRem = (r - currentVal % k + k) % k;
                    dp[i][j][r] = (dp[i][j][r] + dp[i][j-1][prevRem]) % MOD;
                }
            }
        }
    }
    
    return dp[m-1][n-1][0];
};