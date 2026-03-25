//POTD - leetcode

<h2><a href="https://leetcode.com/problems/equal-sum-grid-partition-i">3546. Equal Sum Grid Partition I</a></h2><h3>Medium</h3><hr>

<p>You are given an <code>m x n</code> matrix <code>grid</code> of positive integers. Your task is to determine whether it is possible to make exactly one <strong>horizontal</strong> or <strong>vertical</strong> cut such that:</p>

<ul>
<li>Both resulting parts are <strong>non-empty</strong>.</li>
<li>The sum of elements in both parts is <strong>equal</strong>.</li>
</ul>

<p>Return <code>true</code> if such a partition exists, otherwise return <code>false</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,4],
        [2,3]]

<strong>Output:</strong>
true

<strong>Explanation:</strong>
A horizontal cut between row 0 and row 1 splits the grid into:
Top part    → sum = 1 + 4 = 5
Bottom part → sum = 2 + 3 = 5

Both sections are non-empty and have equal sums.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,3],
        [2,4]]

<strong>Output:</strong>
false

<strong>Explanation:</strong>
No horizontal or vertical cut divides the grid into two non-empty parts with equal sums.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= m == grid.length &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= n == grid[i].length &lt;= 10<sup>5</sup></code></li>
<li><code>2 &lt;= m * n &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= grid[i][j] &lt;= 10<sup>5</sup></code></li>
</ul>