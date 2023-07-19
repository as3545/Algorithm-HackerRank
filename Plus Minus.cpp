/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Example

There are  elements, two positive, two negative and one zero. Their ratios are ,  and . Results are printed as:

0.400000
0.400000
0.200000
Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

int arr[n]: an array of integers
Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer, , the size of the array.
The second line contains  space-separated integers that describe .

Constraints



Output Format

Print the following  lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros
Sample Input

STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array.
The proportions of occurrence are positive: , negative:  and zeros: .
*/
//Code
  #include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int setprecision=6;
  int positive = 0;
  int negative = 0;
  int zero = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x > 0) {
      positive++;
    } else if (x < 0) {
      negative++;
    } else {
      zero++;
    }
  }
  double positive_ratio = (double)positive / n;
  double negative_ratio = (double)negative / n;
  double zero_ratio = (double)zero / n;
  cout << fixed<< positive_ratio << endl;
  cout << fixed<< negative_ratio << endl;
  cout << fixed<< zero_ratio << endl;
  return 0;
}
