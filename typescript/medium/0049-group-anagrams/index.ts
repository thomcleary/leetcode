export function groupAnagrams(strs: string[]): string[][] {
  const groups = new Map<string, string[]>();

  for (const str of strs) {
    const sortedStr = str.split("").sort().join();
    const existingGroup = groups.get(sortedStr);

    if (existingGroup) {
      existingGroup.push(str);
    } else {
      groups.set(sortedStr, [str]);
    }
  }

  return [...groups.values()];
}
