//POTD - Leetcode

//POTD - leetcode

<h2><a href="https://leetcode.com/problems/fancy-sequence">1622. Fancy Sequence</a></h2><h3>Hard</h3><hr><p>Design an API that builds and modifies a sequence using different operations.</p>

<p>Implement the <strong>Fancy</strong> class:</p>

<ul>
<li><code>Fancy()</code> Initializes the object with an empty sequence.</li>
<li><code>void append(val)</code> Appends an integer <code>val</code> to the end of the sequence.</li>
<li><code>void addAll(inc)</code> Increments all existing values in the sequence by an integer <code>inc</code>.</li>
<li><code>void multAll(m)</code> Multiplies all existing values in the sequence by an integer <code>m</code>.</li>
<li><code>int getIndex(idx)</code> Returns the value at index <code>idx</code> (0-indexed) of the sequence modulo <code>10<sup>9</sup> + 7</code>. If <code>idx</code> is greater than or equal to the length of the sequence, return <code>-1</code>.</li>
</ul>

<p>All operations should be efficient since the total number of operations can be large.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
["Fancy","append","addAll","append","multAll","getIndex","addAll","append","multAll","getIndex","getIndex","getIndex"]

[[],[2],[3],[7],[2],[0],[3],[10],[2],[0],[1],[2]]

<strong>Output:</strong>
[null,null,null,null,null,10,null,null,null,26,34,20]

<strong>Explanation:</strong>
Fancy fancy = new Fancy();

fancy.append(2);   // sequence becomes [2]
fancy.addAll(3);   // sequence becomes [5]
fancy.append(7);   // sequence becomes [5, 7]
fancy.multAll(2);  // sequence becomes [10, 14]

fancy.getIndex(0); // return 10

fancy.addAll(3);   // sequence becomes [13, 17]
fancy.append(10);  // sequence becomes [13, 17, 10]
fancy.multAll(2);  // sequence becomes [26, 34, 20]

fancy.getIndex(0); // return 26
fancy.getIndex(1); // return 34
fancy.getIndex(2); // return 20
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 &lt;= val, inc, m &lt;= 100</code></li>
<li><code>0 &lt;= idx &lt;= 10<sup>5</sup></code></li>
<li>At most <code>10<sup>5</sup></code> total calls will be made to <code>append</code>, <code>addAll</code>, <code>multAll</code>, and <code>getIndex</code>.</li>
</ul>