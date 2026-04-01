//POTD - leetcode

<h2><a href="https://leetcode.com/problems/robot-collisions">2751. Robot Collisions</a></h2><h3>Hard</h3><hr>

<p>There are <code>n</code> 1-indexed robots placed on a line. Each robot has:</p>

<ul>
<li>a unique starting <code>position</code>,</li>
<li>a <code>health</code> value, and</li>
<li>a movement <code>direction</code> which is either <code>'L'</code> (left) or <code>'R'</code> (right).</li>
</ul>

<p>All robots start moving at the same time and at the same speed.</p>

<p>If two robots ever reach the same position, they <strong>collide</strong>:</p>

<ul>
<li>The robot with smaller health is removed.</li>
<li>The robot with larger health survives, but its health decreases by <code>1</code>.</li>
<li>If both robots have the same health, both are removed.</li>
<li>A surviving robot keeps moving in the same direction.</li>
</ul>

<p>Your task is to return the health values of all surviving robots <strong>in the same order as the input</strong>, after all possible collisions have happened.</p>

<p>If no robots survive, return an empty array.</p>

<p><strong>Note:</strong> The <code>positions</code> array may not be sorted.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
positions = [5,4,3,2,1]
healths = [2,17,9,15,10]
directions = "RRRRR"

<strong>Output:</strong>
[2,17,9,15,10]

<strong>Explanation:</strong>
All robots move to the right, so no collisions occur.
All robots survive with their original health values.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
positions = [3,5,2,6]
healths = [10,10,15,12]
directions = "RLRL"

<strong>Output:</strong>
[14]

<strong>Explanation:</strong>
There are two collisions:

- Robot 1 and Robot 2 collide with equal health, so both are removed.
- Robot 3 and Robot 4 collide. Robot 3 survives because 15 &gt; 12,
  and its health becomes 14.

Only one robot remains, so the answer is [14].
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
positions = [1,2,5,6]
healths = [10,10,11,11]
directions = "RLRL"

<strong>Output:</strong>
[]

<strong>Explanation:</strong>
- Robot 1 and Robot 2 collide and both are removed.
- Robot 3 and Robot 4 collide and both are removed.

No robots survive.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= positions.length == healths.length == directions.length == n &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= positions[i], healths[i] &lt;= 10<sup>9</sup></code></li>
<li><code>directions[i]</code> is either <code>'L'</code> or <code>'R'</code></li>
<li>All values in <code>positions</code> are distinct</li>
</ul>