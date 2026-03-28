//POTD - leetcode

<h2><a href="https://leetcode.com/problems/unique-number-of-occurrences">1207. Unique Number of Occurrences</a></h2><h3>Easy</h3><hr>

<p>Given an integer array <code>arr</code>, return <code>true</code> if the number of occurrences of each value in the array is <strong>unique</strong>, otherwise return <code>false</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
arr = [1,2,2,1,1,3]

<strong>Output:</strong>
true

<strong>Explanation:</strong>
1 appears 3 times  
2 appears 2 times  
3 appears 1 time  

All occurrence counts are unique.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
arr = [1,2]

<strong>Output:</strong>
false

<strong>Explanation:</strong>
1 appears once and 2 appears once → duplicate counts.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
arr = [-3,0,1,-3,1,1,1,-3,10,0]

<strong>Output:</strong>
true

<strong>Explanation:</strong>
-3 appears 3 times  
1 appears 4 times  
0 appears 2 times  
10 appears 1 time  

All counts are unique.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 ≤ arr.length ≤ 1000</code></li>
<li><code>-1000 ≤ arr[i] ≤ 1000</code></li>
</ul>