/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumTripletValue = function(nums) {
    let n = nums.length;
    if (n < 3) return 0; 

    let maxI = nums[0]; 
    let result = 0;

   
    let suffixMax = new Array(n).fill(0);
    suffixMax[n - 1] = nums[n - 1];

    for (let i = n - 2; i >= 0; i--) {
        suffixMax[i] = Math.max(suffixMax[i + 1], nums[i]);
    }


    for (let j = 1; j < n - 1; j++) {
        let minJ = nums[j];
        let maxK = suffixMax[j + 1];

        result = Math.max(result, (maxI - minJ) * maxK);
        maxI = Math.max(maxI, nums[j]); 
    }

    return result;
};
