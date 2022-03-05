/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    // find the sqares
    let arr1 = nums.map((ele)=>{return ele*ele});
    // sort them
    arr1.sort((a,b)=>{return a-b});
    return arr1;

};