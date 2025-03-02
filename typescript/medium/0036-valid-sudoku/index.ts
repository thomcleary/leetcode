const keys = [0, 1, 2, 3, 4, 5, 6, 7, 8] as const;

const createMap = () =>
  keys.reduce<Map<number, Set<string>>>(
    (map, key) => map.set(key, new Set()),
    new Map<number, Set<string>>(),
  );

export function isValidSudoku(board: string[][]): boolean {
  const rows = createMap();
  const columns = createMap();
  const squares = createMap();

  for (const [rowIndex, row] of board.entries()) {
    for (const [columnIndex, number] of row.entries()) {
      if (number === ".") {
        continue;
      }

      const squareIndex =
        Math.floor(rowIndex / 3) * 3 + Math.floor(columnIndex / 3);

      const row = rows.get(rowIndex);
      const column = columns.get(columnIndex);
      const square = squares.get(squareIndex);

      if (!row || !column || !square) {
        throw new Error("skill issue");
      }

      if (row.has(number) || column.has(number) || square.has(number)) {
        return false;
      }

      row.add(number);
      column.add(number);
      square.add(number);
    }
  }

  return true;
}
