/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
function comparing(a , b){
    return a.num - b.num;  
}
var twoSum = function(nums, target) {
    let newArr = nums.map((num , idx) => ({num , idx})) ; 
    
    newArr.sort(comparing) ; // in-place sorting
    let l = 0 , r = nums.length - 1 ; 

    while(l < r){
        let item = newArr[r].num + newArr[l].num ; 
        if(item > target)
            r--; 
        else if(item < target)
            l++ ; 

        else return [newArr[l].idx , newArr[r].idx] ; 
    } 
    
};