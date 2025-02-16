import { describe, expect, test } from "bun:test";
import removeElement from ".";

describe("Remove Element", () => {
  test("Example 1", () => {
    const nums = [3, 2, 2, 3];
    const val = 2;

    const result = removeElement(nums, val);

    expect(result).toBe(2);
    expect(nums.slice(0, result).some((n) => n == val)).toBeFalse();
  });

  test("Example 2", () => {
    const nums = [0, 1, 2, 2, 3, 0, 4, 2];
    const val = 2;

    const result = removeElement(nums, val);

    expect(result).toBe(5);
    expect(nums.slice(0, result).some((n) => n == val)).toBeFalse();
  });
});
