//POTD - leetcode

<h2><a href="https://leetcode.com/problems/largest-submatrix-with-rearrangements">1727. Largest Submatrix With Rearrangements</a></h2><h3>Medium</h3><hr>

<p>You are given a binary matrix <code>matrix</code> of size <code>m x n</code>. You are allowed to rearrange the <strong>columns</strong> of the matrix in any order.</p>

<p>Your goal is to find the <strong>largest possible submatrix</strong> consisting only of <code>1's</code> after optimally rearranging the columns.</p>

<p>Return the <strong>maximum area</strong> of such a submatrix.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
matrix = [[0,0,1],
          [1,1,1],
          [1,0,1]]

<strong>Output:</strong>
4

<strong>Explanation:</strong>
By rearranging columns, we can group columns with more 1's together.
The largest submatrix consisting of only 1's has area 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
matrix = [[1,0,1,0,1]]

<strong>Output:</strong>
3

<strong>Explanation:</strong>
Rearranging columns allows placing all 1's together.
The largest submatrix of 1's has area 3.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
matrix = [[1,1,0],
          [1,0,1]]

<strong>Output:</strong>
2

<strong>Explanation:</strong>
Even after rearranging columns, the maximum possible area of a submatrix of 1's is 2.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>m == matrix.length</code></li>
<li><code>n == matrix[i].length</code></li>
<li><code>1 ≤ m * n ≤ 10<sup>5</sup></code></li>
<li><code>matrix[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>