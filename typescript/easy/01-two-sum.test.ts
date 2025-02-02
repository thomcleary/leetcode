import { describe, expect, test } from "bun:test";
import { twoSum } from "./01-two-sum";

describe("Two Sum", () => {
  test("Example 1", () => {
    expect(twoSum([2, 7, 11, 15], 9).sort()).toEqual([0, 1].sort());
  });

  test("Example 2", () => {
    expect(twoSum([3, 2, 4], 6).sort()).toEqual([1, 2].sort());
  });

  test("Example 3", () => {
    expect(twoSum([3, 3], 6).sort()).toEqual([0, 1].sort());
  });
});
