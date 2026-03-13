<h2><a href="https://leetcode.com/problems/minimum-number-of-seconds-to-make-mountain-height-zero">3296. Minimum Number of Seconds to Make Mountain Height Zero</a></h2><h3>Medium</h3><hr><p>You are given an integer <code>mountainHeight</code> denoting the height of a mountain.</p>

<p>You are also given an integer array <code>workerTimes</code> representing the work time of workers in seconds.</p>

<p>The workers work simultaneously to reduce the height of the mountain. For worker <code>i</code>:</p>

<p>To decrease the mountain's height by <code>x</code>, it takes <code>workerTimes[i] + workerTimes[i] * 2 + ... + workerTimes[i] * x</code> seconds. For example:</p>

<ul>
<li>To reduce the height of the mountain by <code>1</code>, it takes <code>workerTimes[i]</code> seconds.</li>
<li>To reduce the height of the mountain by <code>2</code>, it takes <code>workerTimes[i] + workerTimes[i] * 2</code> seconds, and so on.</li>
</ul>

<p>Return an integer representing the minimum number of seconds required for the workers to make the height of the mountain <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> mountainHeight = 4, workerTimes = [2,1,1]
<strong>Output:</strong> 3
<strong>Explanation:</strong>

One way the height of the mountain can be reduced to 0 is:

Worker 0 reduces the height by 1, taking workerTimes[0] = 2 seconds.
Worker 1 reduces the height by 2, taking workerTimes[1] + workerTimes[1] * 2 = 3 seconds.
Worker 2 reduces the height by 1, taking workerTimes[2] = 1 second.

Since they work simultaneously, the minimum time needed is max(2, 3, 1) = 3 seconds.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> mountainHeight = 10, workerTimes = [3,2,2,4]
<strong>Output:</strong> 12
<strong>Explanation:</strong>

Worker 0 reduces the height by 2, taking workerTimes[0] + workerTimes[0] * 2 = 9 seconds.
Worker 1 reduces the height by 3, taking workerTimes[1] + workerTimes[1] * 2 + workerTimes[1] * 3 = 12 seconds.
Worker 2 reduces the height by 3, taking workerTimes[2] + workerTimes[2] * 2 + workerTimes[2] * 3 = 12 seconds.
Worker 3 reduces the height by 2, taking workerTimes[3] + workerTimes[3] * 2 = 12 seconds.

The number of seconds needed is max(9, 12, 12, 12) = 12 seconds.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> mountainHeight = 5, workerTimes = [1]
<strong>Output:</strong> 15
<strong>Explanation:</strong>

There is only one worker in this example, so the answer is:

workerTimes[0] + workerTimes[0] * 2 + workerTimes[0] * 3 + workerTimes[0] * 4 + workerTimes[0] * 5 = 15.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
<li><code>1 <= mountainHeight <= 10<sup>5</sup></code></li>
<li><code>1 <= workerTimes.length <= 10<sup>4</sup></code></li>
<li><code>1 <= workerTimes[i] <= 10<sup>6</sup></code></li>
</ul>