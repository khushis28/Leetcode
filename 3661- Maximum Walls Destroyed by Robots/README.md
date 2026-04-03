//POTD - leetcode

<h2><a href="https://leetcode.com/problems/maximum-walls-destroyed-by-robots">3661. Maximum Walls Destroyed by Robots</a></h2><h3>Hard</h3><hr>

<p>There is an endless straight line containing some <strong>robots</strong> and <strong>walls</strong>.</p>

<p>You are given three integer arrays:</p>

<ul>
<li><code>robots[i]</code> — the position of the <code>i</code>-th robot</li>
<li><code>distance[i]</code> — the maximum distance that the <code>i</code>-th robot’s bullet can travel</li>
<li><code>walls[j]</code> — the position of the <code>j</code>-th wall</li>
</ul>

<p>Each robot has exactly <strong>one bullet</strong>, and it can fire either to the <strong>left</strong> or to the <strong>right</strong>. The bullet can travel at most <code>distance[i]</code> units.</p>

<p>A bullet destroys every wall in its path that lies within its range. However, robots act as <strong>obstacles</strong>:</p>

<ul>
<li>If a bullet hits another robot before reaching a wall, it stops immediately.</li>
<li>Robots themselves are not destroyed.</li>
</ul>

<p>Return the <strong>maximum number of unique walls</strong> that can be destroyed by choosing the best firing direction for each robot.</p>

<p><strong>Note:</strong> A robot and a wall may share the same position, and in that case the wall can still be destroyed by that robot.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
robots = [4]
distance = [3]
walls = [1,10]

<strong>Output:</strong>
1

<strong>Explanation:</strong>
The robot at position 4 fires to the left with distance 3,
covering the interval [1, 4].

It destroys the wall at position 1.
So the answer is 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
robots = [10,2]
distance = [5,1]
walls = [5,2,7]

<strong>Output:</strong>
3

<strong>Explanation:</strong>
The robot at position 10 fires left with distance 5,
covering [5, 10], and destroys walls at positions 5 and 7.

The robot at position 2 fires left with distance 1,
covering [1, 2], and destroys the wall at position 2.

Thus, all 3 walls are destroyed.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
robots = [1,2]
distance = [100,1]
walls = [10]

<strong>Output:</strong>
0

<strong>Explanation:</strong>
The robot at position 1 could reach the wall at position 10 by firing right,
but the robot at position 2 blocks the bullet.

No robot can destroy the wall, so the answer is 0.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= robots.length == distance.length &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= walls.length &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= robots[i], walls[j] &lt;= 10<sup>9</sup></code></li>
<li><code>1 &lt;= distance[i] &lt;= 10<sup>5</sup></code></li>
<li>All values in <code>robots</code> are unique</li>
<li>All values in <code>walls</code> are unique</li>
</ul>