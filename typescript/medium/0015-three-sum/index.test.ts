import { describe, expect, test } from "bun:test";
import { threeSum } from ".";

describe("3Sum", () => {
  test("Example 1", () => {
    const nums = [-1, 0, 1, 2, -1, -4];

    const result = threeSum(nums);

    expect(result).toEqual([
      [-1, -1, 2],
      [-1, 0, 1],
    ]);
  });

  test("Example 2", () => {
    const nums = [0, 1, 1];

    const result = threeSum(nums);

    expect(result).toEqual([]);
  });

  test("Example 3", () => {
    const nums = [0, 0, 0];

    const result = threeSum(nums);

    expect(result).toEqual([[0, 0, 0]]);
  });
});
