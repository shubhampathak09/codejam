// queens challenge
#include<bits/stdc++.h>
using namespace std;
//queen on grid
/*
Problem Statement
We have a grid with 
H
 horizontal rows and 
W
 vertical columns of squares. Square 
(
i
,
j
)
, which is at the 
i
-th row from the top and 
j
-th column from the left, is wall if 
S
i
j
 is # and road if 
S
i
j
 is ..

There is a queen, the chess piece, at Square 
(
1
,
1
)
. In one move, it can move any number of squares to the right, downwards, or diagonally to the lower right to a road square without jumping over wall squares.

In how many ways can the queen travel from Square 
(
1
,
1
)
 to Square 
(
H
,
W
)
? Find the count modulo 
(
10
9
+
7
)
.

Here, two ways to travel are considered different if and only if there exists 
i
 such that the position of the queen after the 
i
-th move is different in those two ways.*/

using mint=modint1000000007;


