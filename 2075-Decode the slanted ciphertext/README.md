//POTD - leetcode

<h2><a href="https://leetcode.com/problems/decode-the-slanted-ciphertext">2075. Decode the Slanted Ciphertext</a></h2><h3>Medium</h3><hr>

<p>A string <code>originalText</code> was encoded using a <strong>slanted transposition cipher</strong> with a fixed number of rows <code>rows</code>.</p>

<p>To encode:</p>

<ul>
<li>The characters of <code>originalText</code> are placed in a matrix diagonally from <strong>top-left to bottom-right</strong>.</li>
<li>Any remaining empty cells are filled with spaces <code>' '</code>.</li>
<li>The encoded string <code>encodedText</code> is then created by reading the matrix <strong>row by row</strong>.</li>
</ul>

<p>Given the encoded string <code>encodedText</code> and the integer <code>rows</code>, return the original string <code>originalText</code>.</p>

<p><strong>Note:</strong> The original text does not contain trailing spaces, and the input is guaranteed to correspond to exactly one valid original string.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
encodedText = "ch   ie   pr", rows = 3

<strong>Output:</strong>
"cipher"

<strong>Explanation:</strong>
The encoded text comes from placing the characters diagonally in a 3-row matrix
and then reading the matrix row by row.
Decoding reconstructs the original string "cipher".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
encodedText = "iveo    eed   l te   olc", rows = 4

<strong>Output:</strong>
"i love leetcode"

<strong>Explanation:</strong>
By rebuilding the matrix and reading diagonally,
we recover the original text "i love leetcode".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
encodedText = "coding", rows = 1

<strong>Output:</strong>
"coding"

<strong>Explanation:</strong>
With only one row, the encoded text is the same as the original text.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>0 &lt;= encodedText.length &lt;= 10<sup>6</sup></code></li>
<li><code>encodedText</code> consists only of lowercase English letters and spaces</li>
<li><code>1 &lt;= rows &lt;= 1000</code></li>
<li>The input is guaranteed to be a valid encoding of exactly one original string</li>
</ul>