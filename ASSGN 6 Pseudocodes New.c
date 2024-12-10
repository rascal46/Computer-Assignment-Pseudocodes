// Assignment 6(1)

DECLARE variables m, n
PRINT "Enter the number of rows and columns:"
INPUT m, n

DECLARE 2D array matrix of size m x n

PRINT "Enter the elements of the matrix:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        INPUT matrix[i][j]
    ENDFOR
ENDFOR

DECLARE variable max = matrix[0][0]

FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        IF matrix[i][j] > max THEN
            SET max = matrix[i][j]
        ENDIF
    ENDFOR
ENDFOR

PRINT "Largest number in the matrix: ", max

RETURN 0


//Assignment 6(2)

DECLARE variables m, n

PRINT "Enter the number of rows and columns: "
INPUT m, n

DECLARE 2D arrays matrix[m][n], transpose[n][m]

PRINT "Enter the elements of the matrix:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        INPUT matrix[i][j]
    ENDFOR
ENDFOR

FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        SET transpose[j][i] = matrix[i][j]
    ENDFOR
ENDFOR

PRINT "Original matrix:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        PRINT matrix[i][j] WITH SPACE
    ENDFOR
    PRINT new line
ENDFOR

PRINT "Transpose of the matrix:"
FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO m - 1 DO
        PRINT transpose[i][j] WITH SPACE
    ENDFOR
    PRINT new line
ENDFOR



// Assignment 6(3)

DECLARE variable n, symmetric = 1

PRINT "Enter the size of the square matrix: "
INPUT n

DECLARE 2D array matrix[n][n]

PRINT "Enter the elements of the matrix:"
FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO n - 1 DO
        INPUT matrix[i][j]
    ENDFOR
ENDFOR

FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO n - 1 DO
        IF matrix[i][j] NOT EQUALS matrix[j][i] THEN
            SET symmetric = 0
            BREAK
        ENDIF
    ENDFOR
ENDFOR

PRINT "The new matrix is:"
FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO n - 1 DO
        PRINT matrix[j][i] WITH SPACE
    ENDFOR
    PRINT new line
ENDFOR

IF symmetric EQUALS 1 THEN
    PRINT "The matrix is symmetric."
ELSE
    PRINT "The matrix is not symmetric."
ENDIF



// Assignment 6(4)

DECLARE variables n, trace = 0

PRINT "Enter the size of the square matrix: "
INPUT n

DECLARE 2D array matrix[n][n]

PRINT "Enter the elements of the matrix:"
FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO n - 1 DO
        INPUT matrix[i][j]
    ENDFOR
ENDFOR

PRINT "The matrix is:"
FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO n - 1 DO
        PRINT matrix[i][j] WITH SPACE
    ENDFOR
    PRINT new line

    SET trace = trace + matrix[i][i]
ENDFOR

PRINT "Trace of the matrix: ", trace



// Assignment 6(5)

DECLARE variables m, n, sum

PRINT "Enter the number of rows and columns: "
INPUT m, n

DECLARE 2D arrays matrix1[m][n], matrix2[m][n]

PRINT "Enter the elements of the first matrix:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        INPUT matrix1[i][j]
    ENDFOR
ENDFOR

PRINT "Enter the elements of the second matrix:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        INPUT matrix2[i][j]
    ENDFOR
ENDFOR

PRINT "Sum of the matrices:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        SET sum = matrix1[i][j] + matrix2[i][j]
        PRINT sum WITH SPACE
    ENDFOR
    PRINT new line
ENDFOR



// Assignment 6(6)

DECLARE variables m, n, p

PRINT "Enter rows and columns of first matrix: "
INPUT m, n

PRINT "Enter columns of second matrix: "
INPUT p

DECLARE 2D arrays matrix1[m][n], matrix2[n][p], product[m][p]

PRINT "Enter the elements of the first matrix:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO n - 1 DO
        INPUT matrix1[i][j]
    ENDFOR
ENDFOR

PRINT "Enter the elements of the second matrix:"
FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO p - 1 DO
        INPUT matrix2[i][j]
    ENDFOR
ENDFOR

FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO p - 1 DO
        SET product[i][j] = 0
        FOR k FROM 0 TO n - 1 DO
            SET product[i][j] = product[i][j] + matrix1[i][k] * matrix2[k][j]
        ENDFOR
    ENDFOR
ENDFOR

PRINT "Product of the matrices:"
FOR i FROM 0 TO m - 1 DO
    FOR j FROM 0 TO p - 1 DO
        PRINT product[i][j] WITH SPACE
    ENDFOR
    PRINT new line
ENDFOR


// Assignment 6 (7)

DECLARE variable n

PRINT "Enter the number of rows for Pascal's Triangle: "
INPUT n

DECLARE 2D array triangle[n][n]

FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO i DO
        IF j EQUALS 0 OR j EQUALS i THEN
            SET triangle[i][j] = 1
        ELSE
            SET triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]
        ENDIF
    ENDFOR
ENDFOR

PRINT "Pascal's Triangle:"
FOR i FROM 0 TO n - 1 DO
    FOR space FROM 0 TO n - i - 2 DO
        PRINT "  " WITH SPACE
    ENDFOR
    FOR j FROM 0 TO i DO
        PRINT triangle[i][j] WITH WIDTH 4
    ENDFOR
    PRINT new line
ENDFOR


//Assignment 6(8)

DECLARE variable n

PRINT "Enter the size of the square matrix: "
INPUT n

DECLARE 2D array matrix[n][n]

FOR i FROM 0 TO n - 1 DO
    FOR j FROM 0 TO n - 1 DO
        IF i EQUALS j THEN
            SET matrix[i][j] = 1
        ELSE
            SET matrix[i][j] = 0
        ENDIF
        PRINT matrix[i][j] WITH SPACE
    ENDFOR
    PRINT new line
ENDFOR
