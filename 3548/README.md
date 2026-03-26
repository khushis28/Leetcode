//POTD - leetcode

<h2><a href="https://leetcode.com/problems/equal-sum-grid-partition-ii">3548. Equal Sum Grid Partition II</a></h2><h3>Hard</h3><hr>

<p>You are given an <code>m x n</code> matrix <code>grid</code> of positive integers. Your task is to determine whether it is possible to make exactly one <strong>horizontal</strong> or <strong>vertical</strong> cut such that:</p>

<ul>
<li>Both resulting sections are <strong>non-empty</strong>.</li>
<li>The sums of the two sections are either <strong>equal</strong>, or can be made equal by discounting <strong>at most one cell in total</strong> from either section.</li>
<li>If one cell is discounted, the remaining cells in that section must still stay <strong>connected</strong>.</li>
</ul>

<p>Return <code>true</code> if such a cut exists, otherwise return <code>false</code>.</p>

<p><strong>Note:</strong> A section is connected if every cell in it can be reached from any other cell by moving up, down, left, or right through cells in the same section.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,4],
        [2,3]]

<strong>Output:</strong>
true

<strong>Explanation:</strong>
A horizontal cut after the first row gives:
Top section    → 1 + 4 = 5
Bottom section → 2 + 3 = 5

Both sections are non-empty and already have equal sums.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,2],
        [3,4]]

<strong>Output:</strong>
true

<strong>Explanation:</strong>
A vertical cut after the first column gives:
Left section  → 1 + 3 = 4
Right section → 2 + 4 = 6

By discounting the cell with value 2 from the right section:
6 - 2 = 4

Now both sections have equal sums, and the remaining cells stay connected.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,2,4],
        [2,3,5]]

<strong>Output:</strong>
false

<strong>Explanation:</strong>
A horizontal cut after the first row gives:
Top section    → 1 + 2 + 4 = 7
Bottom section → 2 + 3 + 5 = 10

If we discount 3 from the bottom section:
10 - 3 = 7

The sums match, but removing 3 splits the bottom section into two disconnected parts:
[2] and [5]

So this cut is invalid.
</pre>

<p><strong class="example">Example 4:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[4,1,8],
        [3,2,6]]

<strong>Output:</strong>
false

<strong>Explanation:</strong>
No valid horizontal or vertical cut can satisfy the required conditions.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= m == grid.length &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= n == grid[i].length &lt;= 10<sup>5</sup></code></li>
<li><code>2 &lt;= m * n &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= grid[i][j] &lt;= 10<sup>5</sup></code></li>
</ul>