//POTD - leetcode

<h2><a href="https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts">2946. Matrix Similarity After Cyclic Shifts</a></h2><h3>Easy</h3><hr>

<p>You are given an <code>m x n</code> integer matrix <code>mat</code> and an integer <code>k</code>. The rows of the matrix are <strong>0-indexed</strong>.</p>

<p>The following process is repeated <code>k</code> times:</p>

<ul>
<li>Rows with even indices <code>(0, 2, 4, ...)</code> are shifted <strong>cyclically to the left</strong> by one position.</li>
<li>Rows with odd indices <code>(1, 3, 5, ...)</code> are shifted <strong>cyclically to the right</strong> by one position.</li>
</ul>

<p>Return <code>true</code> if the matrix after performing all <code>k</code> shifts is identical to the original matrix, otherwise return <code>false</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
mat = [[1,2,3],
       [4,5,6],
       [7,8,9]], k = 4

<strong>Output:</strong>
false

<strong>Explanation:</strong>
After applying the required cyclic row shifts 4 times, the final matrix is not the same as the original matrix.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
mat = [[1,2,1,2],
       [5,5,5,5],
       [6,3,6,3]], k = 2

<strong>Output:</strong>
true

<strong>Explanation:</strong>
After 2 cyclic shifts, the matrix becomes identical to the original matrix.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
mat = [[2,2],
       [2,2]], k = 3

<strong>Output:</strong>
true

<strong>Explanation:</strong>
Since all values are the same, the matrix remains unchanged after any number of cyclic shifts.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= mat.length &lt;= 25</code></li>
<li><code>1 &lt;= mat[i].length &lt;= 25</code></li>
<li><code>1 &lt;= mat[i][j] &lt;= 25</code></li>
<li><code>1 &lt;= k &lt;= 50</code></li>
</ul>
```
