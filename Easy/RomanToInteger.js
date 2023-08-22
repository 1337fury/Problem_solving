/**
 * @param {string} s
 * @return {number}
 */
let roman = {
    "I" : 1,
    "V" : 5,
    "X" : 10,
    "L" : 50,
    "C" : 100,
    "D" : 500,
    "M" : 1000
}
var romanToInt = function(s) {
    const convert = Array.from(s);
    let res = 0, index = 0;
    while (index < convert.length)
        {
            if(roman[convert[index]] < roman[convert[index + 1]])
            {
                res += roman[convert[index + 1]] - roman[convert[index]];
                index += 2;
            }
            else {
                res += roman[convert[index]];
                index++;   
            }
        }
    
    return res;
};
