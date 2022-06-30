/**
 * @param {number} n
 * @return {number}
 */
var ans = 0
var climbStairs = function(n , memo = {}) {
    if (n in memo){
        return memo[n];
    }
    if (n === 2){
        return 2;
    }
    if (n===1){
        return 1;
    }
    ans = climbStairs(n-1 , memo) + climbStairs(n-2 , memo);
    memo[n] = ans;
    return memo[n];
};