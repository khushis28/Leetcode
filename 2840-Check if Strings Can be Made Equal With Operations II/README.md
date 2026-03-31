//POTD - leetcode

<h2><a href="https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii">2840. Check if Strings Can be Made Equal With Operations II</a></h2><h3>Medium</h3><hr>

<p>You are given two strings <code>s1</code> and <code>s2</code>, both of length <code>n</code>, consisting only of lowercase English letters.</p>

<p>You may perform the following operation any number of times on either string:</p>

<ul>
<li>Choose two indices <code>i</code> and <code>j</code> such that <code>i &lt; j</code> and <code>j - i</code> is even, then swap the characters at those indices.</li>
</ul>

<p>Return <code>true</code> if it is possible to make <code>s1</code> equal to <code>s2</code> using the allowed operations, otherwise return <code>false</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
s1 = "abcdba", s2 = "cabdab"

<strong>Output:</strong>
true

<strong>Explanation:</strong>
One possible sequence of operations on s1 is:

Choose indices (0, 2): "abcdba" → "cbadba"  
Choose indices (2, 4): "cbadba" → "cbbdaa"  
Choose indices (1, 5): "cbbdaa" → "cabdab"

Now s1 becomes equal to s2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
s1 = "abe", s2 = "bea"

<strong>Output:</strong>
false

<strong>Explanation:</strong>
It is not possible to make the two strings equal using the allowed operation.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>n == s1.length == s2.length</code></li>
<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
<li><code>s1</code> and <code>s2</code> consist only of lowercase English letters.</li>
</ul>