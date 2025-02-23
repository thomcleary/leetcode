export class Solution {
  encode(strs: string[]): string {
    return strs.map((str) => `${str.length}#${str}`).join("");
  }

  decode(str: string): string[] {
    const strs: string[] = [];

    let sepPos = str.indexOf("#");

    while (sepPos !== -1) {
      const strLength = Number.parseInt(str.slice(0, sepPos));
      const strStart = sepPos + 1;
      const strEnd = strStart + strLength;

      strs.push(str.slice(strStart, strEnd));

      str = str.slice(strEnd);
      sepPos = str.indexOf("#");
    }

    return strs;
  }
}
