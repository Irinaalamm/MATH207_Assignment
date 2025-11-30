MATH-207 – Assignment Summary
Matrix Operations in Modern C++

This document presents a set of beginner-friendly C++ programs that demonstrate essential matrix operations, including transpose, symmetry checks, and matrix arithmetic. Each program uses clear prompts, simple logic, and clean formatting to help students understand matrix handling in C++.

Task 1A – Transpose of a Matrix (Using a Separate Matrix)

Description:
Reads an m × n matrix and prints its transpose (n × m), created by interchanging rows and columns.

Formula:
B[i][j] = A[j][i]

Features:

Accepts dynamic matrix size

Indexed element input

Generates and displays transposed matrix

Example:
A (3×2) → B (2×3)

A:
1 2
3 4
5 6

B:
1 3 5
2 4 6

Task 1B – In-Place Transpose of a Square Matrix

Description:
Computes the transpose of an n × n matrix without using extra memory. Elements are swapped across the main diagonal.

Key Points:

Only for square matrices

In-place swaps: A[i][j] ↔ A[j][i]

Time: O(n²), Space: O(1)

Example:

A:
1 2 3
4 5 6
7 8 9

Transpose:
1 4 7
2 5 8
3 6 9

Task 2 – Check if a Matrix is Symmetric (A = Aᵀ)

Definition:
A square matrix is symmetric if:
A[i][j] = A[j][i]

Program Highlights:

Works for any square matrix

Compares only lower triangle (row > column)

Outputs “Symmetric” / “Not Symmetric”

Example (Symmetric):

1 2 3
2 4 5
3 5 6

Task 3 – Check if a Matrix is Skew-Symmetric (A = −Aᵀ)

Definition:
A matrix is skew-symmetric if:

All diagonal elements are 0

A[i][j] = −A[j][i]

Features:

Valid for any square matrix

Checks diagonal + lower triangle

User-friendly input and output

Example:

0   5  -8
-5  0   9
8  -9   0


Result: Skew-Symmetric

Task 4 – Matrix Addition and Subtraction

Description:
Performs addition and subtraction on two matrices of equal dimensions.

Capabilities:

Ensures both matrices have same size

Takes indexed input

Computes:

Matrix1 + Matrix2

Matrix1 − Matrix2

Example:

Matrix1:
5 6 7
8 9 10

Matrix2:
1 2 3
4 5 6


Addition:

6  8  10
12 14 16


Subtraction:

4 4 4
4 4 4

Task 5 – Matrix Multiplication (Classic Algorithm)

Description:
Multiplies A (m × n) with B (p × q) if n = p, producing C (m × q).

Features:

Confirms compatibility

Uses standard triple-nested loops

Cleanly formatted output

Example:

A (2×3):
1 2 3
4 5 6

B (3×2):
7  8
9 10
11 12


Product:

58  64
139 154
