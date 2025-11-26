/**
 * @param {number} k
 * @return {number}
 */
var smallestRepunitDivByK = function (k) {
    let cnt = 0;
    let temp = 0;
    let remainders = new Set();
    while (temp <= k) {
        if (remainders.has(temp)) {
            return -1;
        }
        remainders.add(temp);
        temp = (temp * 10 + 1) % k;
        cnt++;
        if (temp === 0) {
            return cnt;
            break;
        }
    }
};