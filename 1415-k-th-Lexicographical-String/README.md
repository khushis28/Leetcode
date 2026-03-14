//POTD - leetcode

<h2><a href="https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n">1415. The k-th Lexicographical String of All Happy Strings of Length n</a></h2><h3>Medium</h3><hr><p>A <strong>happy string</strong> is a string that:</p>

<ul>
<li>consists only of letters of the set <code>['a', 'b', 'c']</code>.</li>
<li><code>s[i] != s[i + 1]</code> for all values of <code>i</code> from <code>1</code> to <code>s.length - 1</code> (string is 1-indexed).</li>
</ul>

<p>For example, strings <code>"abc"</code>, <code>"ac"</code>, <code>"b"</code> and <code>"abcbabcbcb"</code> are all happy strings and strings <code>"aa"</code>, <code>"baa"</code> and <code>"ababbc"</code> are not happy strings.</p>

<p>Given two integers <code>n</code> and <code>k</code>, consider a list of all happy strings of length <code>n</code> sorted in <strong>lexicographical order</strong>.</p>

<p>Return the <code>k<sup>th</sup></code> string of this list or return an empty string if there are less than <code>k</code> happy strings of length <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 1, k = 3
<strong>Output:</strong> "c"
<strong>Explanation:</strong>
The list ["a", "b", "c"] contains all happy strings of length 1. The third string is "c".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1, k = 4
<strong>Output:</strong> ""
<strong>Explanation:</strong>
There are only 3 happy strings of length 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 3, k = 9
<strong>Output:</strong> "cab"
<strong>Explanation:</strong>
There are 12 different happy strings of length 3:

["aba", "abc", "aca", "acb", "bab", "bac", "bca", "bcb", "cab", "cac", "cba", "cbc"]

The 9th string is "cab".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 <= n <= 10</code></li>
<li><code>1 <= k <= 100</code></li>
</ul>