/*
 * [6] ZigZag Conversion
 *
 * https://leetcode.com/problems/zigzag-conversion/description/
 *
 * algorithms
 * Medium (27.26%)
 * Total Accepted:    203.2K
 * Total Submissions: 745.4K
 * Testcase Example:  '""\n1'
 *
 * 
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
 * of rows like this: (you may want to display this pattern in a fixed font for
 * better legibility)
 * 
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * 
 * 
 * And then read line by line: "PAHNAPLSIIGYIR"
 * 
 * 
 * Write the code that will take a string and make this conversion given a
 * number of rows:
 * 
 * string convert(string text, int nRows);
 * 
 * convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
 * 
 */
/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
  const arr = []
  let j = 0
  while (j <= s.length) {
    for (let i = 0; i < numRows; i++) {
      if (typeof arr[i] === 'undefined') arr[i] = []
      arr[i].push(s[j++])
    }
    for (let i = numRows - 2; i > 0; i--) {
      if (typeof arr[i] === 'undefined') arr[i] = []
      arr[i].push(s[j++])
    }
  }

  return arr.reduce((acc, chars) => acc + chars.join(''), '')
};
