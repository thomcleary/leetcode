import { describe, expect, test } from "bun:test";
import isAnagram from ".";

describe("Valid Anagram", () => {
  test("Example 1", () => {
    expect(isAnagram("anagram", "nagaram")).toBeTrue();
  });

  test("Example 2", () => {
    expect(isAnagram("rat", "car")).toBeFalse();
  });

  test("Example 3", () => {
    expect(isAnagram("aacc", "ccac")).toBeFalse();
  });
});
