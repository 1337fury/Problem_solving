/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums)
{
    var len = 1;
    var i = 0;
    let arr = [];
    if (nums.length === 0)
      return 0;
    nums.sort((a, b) => a - b);
    while (i < nums.length)
    {
        if (nums[i] === nums[i + 1] || nums[i] === nums[i + 1] - 1)
        {
            if (nums[i] === nums[i + 1] - 1)
              len++;
        }
        else
        {
            arr.push(len);
            len = 1;
        }
        i++;
    }
    return (Math.max(...arr));
};
