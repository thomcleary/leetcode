type Direction = "up" | "down";

export function convert(s: string, numRows: number): string {
  if (numRows === 1) {
    return s;
  }

  const cols = Math.ceil(s.length / numRows);
  const numCols = cols + (cols - 1) * (numRows - 2);

  const pattern: string[][] = Array(numRows)
    .fill(null)
    .map(() => Array(numCols).fill(""));

  let direction: Direction = "down";
  let x = 0;
  let y = 0;

  for (const ch of s) {
    if (pattern[x]?.[y] === undefined) {
      throw new Error(
        `Skill issue setting up array (pattern[${x}][${y}] = ${ch})`,
      );
    }
    // @ts-expect-error
    pattern[x][y] = ch;

    if (direction === "down") {
      if (x + 1 === numRows) {
        direction = "up";
        x -= 1;
        y += 1;
      } else {
        x += 1;
      }
    } else {
      if (x === 0) {
        direction = "down";
        x += 1;
      } else {
        x -= 1;
        y += 1;
      }
    }
  }

  return pattern.map((row) => row.join("")).join("");
}
