export function twoSum(nums: number[], target: number): number[] {
  const map = new Map<number, number>();

  for (let left = 0; left < nums.length; left++) {
    const num = nums[left];
    if (num === undefined) {
      throw new Error("num is undefined");
    }

    const right = map.get(target - num);
    if (right != undefined) {
      return [left, right];
    }

    map.set(num, left);
  }

  throw new Error(
    "You may assume that each input would have exactly one solution",
  );
}
