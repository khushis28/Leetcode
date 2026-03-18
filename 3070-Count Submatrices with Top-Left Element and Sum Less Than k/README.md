
<h2><a href="https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k">3070. Count Submatrices with Top-Left Element and Sum Less Than k</a></h2><h3>Medium</h3><hr>

<p>You are given a 0-indexed integer matrix <code>grid</code> and an integer <code>k</code>.</p>

<p>Return the number of submatrices that:</p>

<ul>
<li>Include the <strong>top-left element</strong> of the grid (i.e., cell <code>(0, 0)</code>), and</li>
<li>Have a total <strong>sum less than or equal to</strong> <code>k</code>.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[7,6,3],
        [6,6,1]],
k = 18

<strong>Output:</strong>
4

<strong>Explanation:</strong>
There are 4 submatrices starting from (0,0) whose sum ≤ 18.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[7,2,9],
        [1,5,0],
        [2,6,6]],
k = 20

<strong>Output:</strong>
6

<strong>Explanation:</strong>
There are 6 submatrices starting from (0,0) whose sum ≤ 20.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>m == grid.length</code></li>
<li><code>n == grid[i].length</code></li>
<li><code>1 ≤ m, n ≤ 1000</code></li>
<li><code>0 ≤ grid[i][j] ≤ 1000</code></li>
<li><code>1 ≤ k ≤ 10<sup>9</sup></code></li>
</ul>
