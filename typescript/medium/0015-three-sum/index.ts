export function threeSum(nums: number[]): number[][] {
  const sortedNums = nums.toSorted((a, b) => a - b);

  const threeSums: number[][] = [];
  let i = 0;

  while (i < sortedNums.length - 2) {
    const target = sortedNums[i]!;
    const previous = sortedNums[i - 1];

    if (target === previous) {
      i++;
      continue;
    }

    let left = i + 1;
    let right = sortedNums.length - 1;

    while (left < right) {
      const leftNum = sortedNums[left]!;
      const rightNum = sortedNums[right]!;
      const threeSum = target + leftNum + rightNum;

      if (threeSum === 0) {
        threeSums.push([target, leftNum, rightNum]);
      }

      if (threeSum <= 0) {
        do {
          left++;
        } while (left < right && sortedNums[left] === leftNum);
      }

      if (threeSum >= 0) {
        do {
          right--;
        } while (left < right && sortedNums[right] === rightNum);
      }
    }

    i++;
  }

  return threeSums;
}
