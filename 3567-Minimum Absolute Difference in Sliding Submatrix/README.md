//POTD - leetcode

<h2><a href="https://leetcode.com/problems/minimum-absolute-difference-in-sliding-submatrix">3567. Minimum Absolute Difference in Sliding Submatrix</a></h2><h3>Medium</h3><hr>

<p>You are given an <code>m x n</code> integer matrix <code>grid</code> and an integer <code>k</code>.</p>

<p>For every contiguous <code>k x k</code> submatrix of <code>grid</code>, compute the <strong>minimum absolute difference</strong> between any two <strong>distinct values</strong> inside that submatrix.</p>

<p>Return a 2D array <code>ans</code> of size <code>(m - k + 1) x (n - k + 1)</code>, where <code>ans[i][j]</code> represents the result for the submatrix with top-left corner at <code>(i, j)</code>.</p>

<p><strong>Note:</strong> If all elements in a submatrix are the same, the answer is <code>0</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,8],
        [3,-2]], k = 2

<strong>Output:</strong>
[[2]]

<strong>Explanation:</strong>
Only one 2x2 submatrix exists: [[1, 8], [3, -2]]  
Distinct values → [1, 8, 3, -2]  
Minimum absolute difference → |1 - 3| = 2
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[3,-1]], k = 1

<strong>Output:</strong>
[[0,0]]

<strong>Explanation:</strong>
Each submatrix has only one element, so result is 0.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,-2,3],
        [2,3,5]], k = 2

<strong>Output:</strong>
[[1,2]]

<strong>Explanation:</strong>

Submatrix at (0,0): [[1, -2], [2, 3]]  
Values → [1, -2, 2, 3] → min diff = 1  

Submatrix at (0,1): [[-2, 3], [3, 5]]  
Values → [-2, 3, 5] → min diff = 2
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 ≤ m == grid.length ≤ 30</code></li>
<li><code>1 ≤ n == grid[i].length ≤ 30</code></li>
<li><code>-10<sup>5</sup> ≤ grid[i][j] ≤ 10<sup>5</sup></code></li>
<li><code>1 ≤ k ≤ min(m, n)</code></li>
</ul>