//POTD - leetcode

<h2><a href="https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix">1594. Maximum Non Negative Product in a Matrix</a></h2><h3>Medium</h3><hr>

<p>You are given an <code>m x n</code> matrix <code>grid</code>. You start at the top-left corner <code>(0, 0)</code> and can only move <strong>right</strong> or <strong>down</strong> at each step.</p>

<p>Among all possible paths from <code>(0, 0)</code> to <code>(m - 1, n - 1)</code>, find the path with the <strong>maximum non-negative product</strong>. The product of a path is the multiplication of all values in the cells visited along that path.</p>

<p>Return the maximum non-negative product modulo <code>10<sup>9</sup> + 7</code>. If the maximum product is negative, return <code>-1</code>.</p>

<p><strong>Note:</strong> The modulo should be applied only after finding the maximum product.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[-1,-2,-3],
        [-2,-3,-3],
        [-3,-3,-2]]

<strong>Output:</strong>
-1

<strong>Explanation:</strong>
Every possible path from the top-left to the bottom-right gives a negative product,
so the answer is -1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,-2,1],
        [1,-2,1],
        [3,-4,1]]

<strong>Output:</strong>
8

<strong>Explanation:</strong>
One valid path gives product:
1 * 1 * -2 * -4 * 1 = 8

This is the maximum non-negative product.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,3],
        [0,-4]]

<strong>Output:</strong>
0

<strong>Explanation:</strong>
One valid path gives product:
1 * 0 * -4 = 0
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>m == grid.length</code></li>
<li><code>n == grid[i].length</code></li>
<li><code>1 ≤ m, n ≤ 15</code></li>
<li><code>-4 ≤ grid[i][j] ≤ 4</code></li>
</ul>