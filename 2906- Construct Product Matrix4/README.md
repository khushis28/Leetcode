//POTD - leetcode

<h2><a href="https://leetcode.com/problems/construct-product-matrix">2906. Construct Product Matrix</a></h2><h3>Medium</h3><hr>

<p>You are given a 0-indexed 2D integer matrix <code>grid</code> of size <code>n x m</code>.</p>

<p>Construct a 0-indexed 2D matrix <code>p</code> of the same size, where each element <code>p[i][j]</code> is equal to the product of <strong>all elements in <code>grid</code> except <code>grid[i][j]</code></strong>, taken modulo <code>12345</code>.</p>

<p>Return the resulting <strong>product matrix</strong>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,2],
        [3,4]]

<strong>Output:</strong>
[[24,12],
 [8,6]]

<strong>Explanation:</strong>
p[0][0] = 2 * 3 * 4 = 24
p[0][1] = 1 * 3 * 4 = 12
p[1][0] = 1 * 2 * 4 = 8
p[1][1] = 1 * 2 * 3 = 6

So the answer is [[24,12],[8,6]].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[12345],
        [2],
        [1]]

<strong>Output:</strong>
[[2],
 [0],
 [0]]

<strong>Explanation:</strong>
p[0][0] = 2 * 1 = 2
p[1][0] = 12345 * 1 = 12345 % 12345 = 0
p[2][0] = 12345 * 2 = 24690 % 12345 = 0

So the answer is [[2],[0],[0]].
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= n == grid.length &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= m == grid[i].length &lt;= 10<sup>5</sup></code></li>
<li><code>2 &lt;= n * m &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= grid[i][j] &lt;= 10<sup>9</sup></code></li>
</ul>