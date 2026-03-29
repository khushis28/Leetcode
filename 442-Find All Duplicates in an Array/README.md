<h2><a href="https://leetcode.com/problems/find-all-duplicates-in-an-array">442. Find All Duplicates in an Array</a></h2><h3>Medium</h3><hr>

<p>You are given an integer array <code>nums</code> of length <code>n</code>, where all integers are in the range <code>[1, n]</code> and each integer appears either <strong>once or twice</strong>.</p>

<p>Return an array of all the elements that appear <strong>twice</strong>.</p>

<p><strong>Note:</strong> You must solve the problem in <code>O(n)</code> time and use only <strong>constant extra space</strong> (excluding the output array).</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
nums = [4,3,2,7,8,2,3,1]

<strong>Output:</strong>
[2,3]

<strong>Explanation:</strong>
2 and 3 appear twice in the array.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
nums = [1,1,2]

<strong>Output:</strong>
[1]

<strong>Explanation:</strong>
1 appears twice.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
nums = [1]

<strong>Output:</strong>
[]

<strong>Explanation:</strong>
No element appears twice.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>n == nums.length</code></li>
<li><code>1 ≤ n ≤ 10<sup>5</sup></code></li>
<li><code>1 ≤ nums[i] ≤ n</code></li>
<li>Each element appears once or twice.</li>
</ul>