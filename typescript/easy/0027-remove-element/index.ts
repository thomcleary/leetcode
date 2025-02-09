function removeElement(nums: number[], val: number): number {
  let length = 0;
  let tail = nums.length - 1;

  for (let i = tail; i >= 0; i--) {
    if (nums[i] === val) {
      // @ts-ignore trust me bro
      nums[i] = nums[tail];
      tail -= 1;
    } else {
      length += 1;
    }
  }

  return length;
}

export default removeElement;
