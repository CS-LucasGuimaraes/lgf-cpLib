# Code snippets in c++

## Code template

* ### Pattern &nbsp; `"pattern"`

  ```c++
  #include <bits/stdc++.h>

  #define endl '\n'

  using namespace std;

  int main(){
      ios::sync_with_stdio(false);
      cin.tie(0);

      /* code */

      return 0;
  }
  ```
* ### I/O &nbsp; `"I/O"`

  ```c++
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  ```
* ### Test cases &nbsp; `"tc", "test_cases" `

  ```c++
  int tc; cin >> tc; while (tc--) {
      /* code */
  }
  ```

<br>

## Type macros

* ### Define long long &nbsp; `"ll"`

  ```c++
  using ll = long long;
  ```
* ### Int -> long long &nbsp; `"defintll", "int to ll"`

  ```c++
  #define int long long //change main to int32_t
  ```
* ### Pair of ints `"pii"`

  ```c++
  using pii = pair<int,int>;
  ```
* ### Tuple of ints `"iii"`

  ```c++
  using iii = tuple<int,int,int>
  ```

<br>

## Nested loops

* ### 2 nested for loops &nbsp; `"2for"`

  ```c++
  for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
          /* code  */
      }
  }
  ```
* ### 3 nested for loops &nbsp; `"3for"`

  ```c++
  for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
          for (int k = 0; k < c; k++) {
              /* code  */
          }
      }
  }
  ```

<br>

## Reading boards // matrix

* ### Reading a Board NxN &nbsp; `"NxN", "boardN"`

  ```c++
  int n; char c;

  cin >> n;

  char board[n][n];

  for (int i = 0; i < n; i++) {
      cin.get();
      for (int j = 0; j < n; i++) {
          cin.get(c);
          board[i][j] = c;
      }
  }
  ```
* ### Reading a board row x col &nbsp; `"rowXcol", "rxc", "boardrowcol"`

  ```c++
  int row, col; char c;

  cin >> row >> col;

  char board[row][col];

  for (int i = 0; i < row; i++) {
      cin.get();
      for (int j = 0; j < col; i++) {
          cin.get(c);
          board[i][j] = c;
      }
  }
  ```

<br>

## Quality of life (QoL)

* ### Max/min of 3 elements `"defmax3", "defmin3", "maxmin3"`

  ```c++
  #define min3(a,b,c) (min((a),min((b),(c)))) 
  #define max3(a,b,c) (max((a),max((b),(c)))) 
  ```
