//POTD - leetcode

<h2><a href="https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i">2839. Check if Strings Can be Made Equal With Operations I</a></h2><h3>Easy</h3><hr>

<p>You are given two strings <code>s1</code> and <code>s2</code>, each of length <code>4</code>, consisting of lowercase English letters.</p>

<p>You can perform the following operation any number of times on either string:</p>

<ul>
<li>Choose two indices <code>i</code> and <code>j</code> such that <code>j - i = 2</code>, and swap the characters at those indices.</li>
</ul>

<p>Return <code>true</code> if you can make <code>s1</code> equal to <code>s2</code>, otherwise return <code>false</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
s1 = "abcd", s2 = "cdab"

<strong>Output:</strong>
true

<strong>Explanation:</strong>
Swap indices (0,2): "abcd" → "cbad"  
Swap indices (1,3): "cbad" → "cdab"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
s1 = "abcd", s2 = "dacb"

<strong>Output:</strong>
false

<strong>Explanation:</strong>
It is not possible to make both strings equal using the allowed operation.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>s1.length == s2.length == 4</code></li>
<li><code>s1</code> and <code>s2</code> consist of lowercase English letters.</li>
</ul>