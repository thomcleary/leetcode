import { describe, expect, test } from "bun:test";
import { Solution } from ".";

const { encode, decode } = new Solution();

describe("Encode and Decode Strings", () => {
  test("Example 1", () => {
    const strings = ["neet", "code", "love", "you"];
    expect(decode(encode(strings))).toEqual(strings);
  });

  test("Example 2", () => {
    const strings = ["we", "say", ":", "yes"];
    expect(decode(encode(strings))).toEqual(strings);
  });
});
