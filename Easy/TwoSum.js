/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
	let temp = new Map();
	let sub;
	for(var i= 0; i < nums.length; i++){
		sub = target - nums[i];
		if(temp.has(sub))
			return [temp.get(sub), i];
		else
			temp.set(nums[i], i);
	}
};
