import { describe, expect, test } from "bun:test";
import containsDuplicate from ".";

describe("Contains Duplicate", () => {
  test("Example 1", () => {
    expect(containsDuplicate([1, 2, 3, 1])).toBeTrue();
  });

  test("Example 2", () => {
    expect(containsDuplicate([1, 2, 3, 4])).toBeFalse();
  });

  test("Example 3", () => {
    expect(containsDuplicate([1, 1, 1, 3, 3, 4, 3, 2, 4, 2])).toBeTrue();
  });
});
