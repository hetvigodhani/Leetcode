/**
 * @param {number[]} nums
 * @return {boolean[]}
 */
var prefixesDivBy5 = function (nums) {
    let ans = [];
    let curr = 0;

    for (let i = 0; i < nums.length; i++) {
        curr = (curr * 2 + nums[i]) % 5;
        ans.push(curr === 0);
    }
    return ans;

};