//POTD - leetcode

<h2><a href="https://leetcode.com/problems/maximum-amount-of-money-robot-can-earn">3418. Maximum Amount of Money Robot Can Earn</a></h2><h3>Medium</h3><hr>

<p>You are given an <code>m x n</code> grid <code>coins</code>. A robot starts at the top-left cell <code>(0, 0)</code> and wants to reach the bottom-right cell <code>(m - 1, n - 1)</code>.</p>

<p>The robot can only move <strong>right</strong> or <strong>down</strong>.</p>

<p>Each cell affects the robot's money as follows:</p>

<ul>
<li>If <code>coins[i][j] &gt;= 0</code>, the robot gains that many coins.</li>
<li>If <code>coins[i][j] &lt; 0</code>, the robot encounters a robber and loses <code>|coins[i][j]|</code> coins.</li>
</ul>

<p>The robot has a special ability: it can <strong>neutralize robbers in at most 2 cells</strong> along its path, which prevents losing coins in those cells.</p>

<p><strong>Note:</strong> The robot’s total number of coins can be negative.</p>

<p>Return the <strong>maximum profit</strong> the robot can earn by choosing the best path and using the neutralizations optimally.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
coins = [[0,1,-1],
         [1,-2,3],
         [2,-3,4]]

<strong>Output:</strong>
8

<strong>Explanation:</strong>
One optimal path is:

Start at (0,0) → total = 0  
Move to (0,1) → gain 1 → total = 1  
Move to (1,1) → robber steals 2, but robot neutralizes it → total = 1  
Move to (1,2) → gain 3 → total = 4  
Move to (2,2) → gain 4 → total = 8
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
coins = [[10,10,10],
         [10,10,10]]

<strong>Output:</strong>
40

<strong>Explanation:</strong>
One optimal path is:

Start at (0,0) → total = 10  
Move to (0,1) → total = 20  
Move to (0,2) → total = 30  
Move to (1,2) → total = 40

No robber neutralization is needed.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>m == coins.length</code></li>
<li><code>n == coins[i].length</code></li>
<li><code>1 &lt;= m, n &lt;= 500</code></li>
<li><code>-1000 &lt;= coins[i][j] &lt;= 1000</code></li>
</ul>