//POTD - leetcode

<h2><a href="https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y">3212. Count Submatrices With Equal Frequency of X and Y</a></h2><h3>Medium</h3><hr>

<p>You are given a 2D character matrix <code>grid</code> where each cell contains <code>'X'</code>, <code>'Y'</code>, or <code>'.'</code>.</p>

<p>Return the number of submatrices that satisfy the following conditions:</p>

<ul>
<li>The submatrix must include the <strong>top-left cell</strong> <code>grid[0][0]</code>.</li>
<li>It must have an <strong>equal number of 'X' and 'Y'</strong>.</li>
<li>It must contain <strong>at least one 'X'</strong>.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [["X","Y","."],
        ["Y",".","."]]

<strong>Output:</strong>
3

<strong>Explanation:</strong>
There are 3 submatrices starting from (0,0) where the count of 'X' and 'Y' is equal and at least one 'X' is present.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [["X","X"],
        ["X","Y"]]

<strong>Output:</strong>
0

<strong>Explanation:</strong>
No submatrix has equal counts of 'X' and 'Y'.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[".", "."],
        [".", "."]]

<strong>Output:</strong>
0

<strong>Explanation:</strong>
No submatrix contains at least one 'X'.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 ≤ grid.length, grid[i].length ≤ 1000</code></li>
<li><code>grid[i][j]</code> is either <code>'X'</code>, <code>'Y'</code>, or <code>'.'</code></li>
</ul>