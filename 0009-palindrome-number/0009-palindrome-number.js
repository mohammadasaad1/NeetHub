/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let str = String(x) , n = str.length;
     for(let i = 0 ; i <= n / 2; i++){
        if(str[i] !== str[n - 1 - i])
            return false;
     }
     return true ;
};