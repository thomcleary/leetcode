import { describe, expect, test } from "bun:test";
import { groupAnagrams } from ".";

describe("Group Anagrams", () => {
  test("Example 1", () => {
    const result = groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]);
    const group1 = result.find((group) => group.includes("bat"));
    const group2 = result.find((group) => group.includes("nat"));
    const group3 = result.find((group) => group.includes("ate"));

    expect(result).toHaveLength(3);
    expect(group1).toHaveLength(1);
    expect(group1).toEqual(["bat"]);
    expect(group2).toHaveLength(2);
    expect(group2).toContain("nat");
    expect(group2).toContain("tan");
    expect(group3).toHaveLength(3);
    expect(group3).toContain("ate");
    expect(group3).toContain("eat");
    expect(group3).toContain("tea");
  });

  test("Example 2", () => {
    expect(groupAnagrams([""])).toEqual([[""]]);
  });

  test("Example 3", () => {
    expect(groupAnagrams(["a"])).toEqual([["a"]]);
  });
});
