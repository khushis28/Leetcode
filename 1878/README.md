//POTD - leetcode

<h2><a href="https://leetcode.com/problems/get-biggest-three-rhombus-sums-in-a-grid">1878. Get Biggest Three Rhombus Sums in a Grid</a></h2><h3>Medium</h3><hr>

<p>You are given an <code>m x n</code> integer matrix <code>grid</code>.</p>

<p>A <strong>rhombus sum</strong> is the sum of the elements that form the <strong>border</strong> of a regular rhombus shape in the grid. The rhombus is essentially a square rotated <strong>45 degrees</strong> where each corner lies on a cell of the grid.</p>

<p>The rhombus may also have an <strong>area of 0</strong>, which means it consists of only a single cell.</p>

<p>Your task is to find the <strong>three largest distinct rhombus sums</strong> and return them in <strong>descending order</strong>. If there are fewer than three distinct sums, return all available values.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[3,4,5,1,3],
        [3,3,4,2,3],
        [20,30,200,40,10],
        [1,5,5,4,1],
        [4,3,2,2,5]]

<strong>Output:</strong>
[228,216,211]

<strong>Explanation:</strong>
The three largest rhombus border sums are:

Blue  : 20 + 3 + 200 + 5 = 228  
Red   : 200 + 2 + 10 + 4 = 216  
Green : 5 + 200 + 4 + 2 = 211
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[1,2,3],
        [4,5,6],
        [7,8,9]]

<strong>Output:</strong>
[20,9,8]

<strong>Explanation:</strong>

Blue  : 4 + 2 + 6 + 8 = 20  
Red   : 9 (single cell rhombus)  
Green : 8 (single cell rhombus)
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
grid = [[7,7,7]]

<strong>Output:</strong>
[7]

<strong>Explanation:</strong>
All possible rhombus sums are the same, so only one distinct value exists.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>m == grid.length</code></li>
<li><code>n == grid[i].length</code></li>
<li><code>1 ≤ m, n ≤ 50</code></li>
<li><code>1 ≤ grid[i][j] ≤ 10<sup>5</sup></code></li>
</ul>