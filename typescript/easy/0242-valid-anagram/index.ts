export default function isAnagram(s: string, t: string): boolean {
  const sChars = s.trim().split("");

  const sCharCount = sChars.reduce<Record<string, number>>((map, char) => {
    map[char] = (map[char] ?? 0) + 1;
    return map;
  }, {});

  for (const tChar of t.trim()) {
    if (!sCharCount[tChar]) {
      return false;
    }
    sCharCount[tChar] -= 1;
  }

  return !sChars.some((key) => sCharCount[key] !== 0);
}
