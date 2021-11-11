# Alternate-Fibonacci

Rishabh is novice in programming.

He learned how to generate a fibonacci series.

He noticed that fibonacci series is always increasing so he altered it such that f(n) = | f(n-1) - f(n-2) |.

It means that f(n) can never be negative.

So all he wants is to count the number of iterations that series take in reducing itself to zero.

## Input Format

The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. Only one line of each test case, contains two integers f(0) and f(1) denoting the number described above.

## Constraints

1 ≤ T ≤ 10

1 ≤ f(0) ≤ 10^4

1 ≤ f(1) ≤ 10^4

## Output Format

For each test case, output a single line containing one integer indicating the number of iterations.

## Sample Input 0

5
2 5
6 5
2 1
7 9
7 2
## Sample Output 0

5
8
2
10
6
## Sample Input 1

1
5 7
## Sample Output 1

7
## Explanation 1

The series becomes 5,7,2,5,3,2,1,1,0 after applying the given formula i.e. Next Term = Difference between Previous 2 terms. After that we count the numbers from third term upto zero(last term) ,so the output becomes 7.
