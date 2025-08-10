# Multidimensional Arrays

## Name: Maitraiyee Vashistha
## PRN: 24070123057
## Division: ENTC-A3
## Title: Basic operations of 2-D Arrays in C ++
---
## Aim :
*To use basic functions and take input and output in 2-D Arrays in C++*

---


## **Introduction**
A **two-dimensional (2D) array**, also called a **multidimensional array**, is essentially an array of arrays.  
It is used to store data in a grid-like structure, making it ideal for representing **matrices**, **tables**, or any data logically arranged in rows and columns.  

Each element in a 2D array is accessed using **two indices**:  
- One index for the **row**  
- One index for the **column**

**Key Points:**
- **Declaration:**  
  `int arr[rows][cols];`
 - **Accessing an element:**    
   ` arr[i][j]; // i = row index, j = column index`

Common uses: Matrix addition, multiplication, transpose, and diagonal summation.

## Programs, Algorithms & Explanations
### 1. Input and Display of a 3×3 Matrix
*Problem:* Read and print a fixed-size 3×3 matrix.

#### Algorithm:

 - Declare a matrix of size 3×3.

 - Use nested loops to input elements row by row.

 - Use nested loops to display the matrix in a row-column format.

#### Explanation:
This is a basic program to understand how to handle input and output for a 2D array and how indices work.

### 2. Matrix Addition
*Problem:* Add two matrices of the same dimensions.

#### Algorithm:

 - Input the number of rows and columns (must be the same for both matrices).

 - Input elements for both matrices.

 - Create a result matrix of the same dimensions.

 - Loop through each position (i, j) and add corresponding elements:                 
     ` result[i][j] = matrix1[i][j] + matrix2[i][j]`

 - Display the result matrix.

#### Explanation:
Matrix addition is performed element by element. Both matrices must have identical sizes for the operation to be valid.

### 3. Matrix Multiplication
*Problem:* Multiply two matrices if the number of columns in the first matrix equals the number of rows in the second matrix.

#### Algorithm:

 - Input rows and columns for both matrices.

 - Check if multiplication is possible (cols1 == rows2). If not, display an error message.

 - Input elements for both matrices.

 - Initialize the result matrix to all zeros.

 - For each cell (i, j) in the result matrix:

 - Multiply corresponding elements from row i of the first matrix and column j of the second matrix.

 - Sum these products to get result[i][j].

 - Display the result matrix.

#### Explanation:
Matrix multiplication produces a new matrix whose dimensions are based on the first matrix’s rows and the second matrix’s columns. It combines the row data of the first with the column data of the second.

### 4. Matrix Transpose
*Problem:* Find the transpose of a matrix.

#### Algorithm:

 - Input the number of rows and columns.

 - Input all matrix elements.

 - Create a new matrix where the number of rows equals the original number of columns, and vice versa.

 - For each element (i, j) in the original matrix, store it at (j, i) in the transpose matrix.

 - Display the transpose matrix.

#### Explanation:
The transpose operation flips the matrix over its diagonal — rows become columns and columns become rows. It is commonly used in algebra, graphics, and data transformations.

### 5. Sum of Main Diagonal Elements
*Problem:* Find the sum of all elements on the main diagonal of a square matrix.

#### Algorithm:

 - Input the number of rows and columns.

 - Check if the matrix is square (rows == cols). If not, output that the operation is invalid.

 - Input matrix elements.

 - Initialize a variable sum = 0.

 - Loop through the matrix and add all elements where the row index equals the column index:
      `sum += matrix[i][i]`

 - Display the sum.

#### Explanation:
In the main diagonal, the row and column indices are the same — for example (0,0), (1,1), (2,2). The diagonal sum is the sum of these elements.

## Conclusion
This experiment covers five core operations involving 2D arrays in C++.
By working with these examples, we gain a clear understanding of:

 - Declaring and initializing multidimensional arrays.

 - Reading and displaying matrix elements.

 - Performing standard matrix operations like addition, multiplication, transpose, and diagonal sum.
