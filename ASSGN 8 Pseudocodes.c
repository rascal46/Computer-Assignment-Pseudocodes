//1.

DECLARE FUNCTION product(a, b)
    RETURN a MULTIPLIED BY b
END FUNCTION

DECLARE variables a, c AS float
DECLARE variable b AS integer

PRINT "Enter a float number: "
INPUT a

PRINT "Enter an integer number: "
INPUT b

SET c = CALL product(a, b)

PRINT "Product: ", c


//2.

DECLARE FUNCTION swap(a, b AS POINTERS)
    DECLARE variable c
    SET c = VALUE AT a
    SET VALUE AT a = VALUE AT b
    SET VALUE AT b = c
END FUNCTION

DECLARE variables x, y AS integers

PRINT "Enter two numbers: "
INPUT x, y

PRINT "Before swapping: x = ", x, ", y = ", y

CALL swap(ADDRESS OF x, ADDRESS OF y)

PRINT "After swapping: x = ", x, ", y = ", y




//3I.

DECLARE FUNCTION fact(n AS integer) RETURNS integer
    DECLARE variable f = 1
    DECLARE variable i
    FOR i FROM 1 TO n DO
        SET f = f MULTIPLIED BY i
    ENDFOR
    RETURN f
END FUNCTION

DECLARE variables n, f AS integers

PRINT "Enter a number: "
INPUT n

SET f = CALL fact(n)

PRINT "Factorial of ", n, ": ", f



//3II.

DECLARE FUNCTION fact(a AS integer) RETURNS integer
    IF a EQUALS 1 THEN
        RETURN a
    ELSE
        RETURN a MULTIPLIED BY CALL fact(a - 1)
    ENDIF
END FUNCTION

DECLARE variables n, f AS integers

PRINT "Enter a number: "
INPUT n

SET f = CALL fact(n)

PRINT "Factorial of ", n, ": ", f



//4I

DECLARE FUNCTION fibonacci(n AS integer)
    DECLARE variables a = 0, b = 1, c
    PRINT a, b WITH SPACE
    FOR i FROM 2 TO n - 1 DO
        SET c = a + b
        PRINT c WITH SPACE
        SET a = b
        SET b = c
    ENDFOR
    PRINT new line
END FUNCTION

DECLARE variable n AS integer

PRINT "Enter the number of terms: "
INPUT n

IF n >= 2 THEN
    CALL fibonacci(n)
ELSE
    PRINT "Enter a number greater than or equal to 2"
ENDIF


// 4II

DECLARE FUNCTION fibonacci(n AS integer) RETURNS integer
    IF n EQUALS 0 THEN
        RETURN 0
    ELSE IF n EQUALS 1 THEN
        RETURN 1
    ELSE
        RETURN CALL fibonacci(n - 1) + CALL fibonacci(n - 2)
    ENDIF
END FUNCTION

DECLARE variable n AS integer

PRINT "Enter the number of terms: "
INPUT n

FOR i FROM 0 TO n - 1 DO
    PRINT CALL fibonacci(i) WITH SPACE
ENDFOR

PRINT new line

// 5.

DECLARE FUNCTION hcf(a, b AS integers) RETURNS integer
    IF b EQUALS 0 THEN
        RETURN a
    ELSE
        RETURN CALL hcf(b, a MOD b)
    ENDIF
END FUNCTION

DECLARE variables m, n, p AS integers

PRINT "Enter two numbers: "
INPUT m, n

SET p = CALL hcf(m, n)

PRINT "HCF: ", p


//6.

DECLARE FUNCTION Quad(a, b, c AS integers)
    DECLARE variables d, x, y AS integers
    SET d = (b MULTIPLIED BY b) - (4 MULTIPLIED BY a MULTIPLIED BY c)

    IF d >= 0 THEN
        SET x = ((-b) + SQUARE ROOT OF d) DIVIDED BY (2 MULTIPLIED BY a)
        SET y = ((-b) - SQUARE ROOT OF d) DIVIDED BY (2 MULTIPLIED BY a)
        PRINT "The Real Roots Are x=", x, " and y=", y
    ELSE IF d < 0 THEN
        PRINT "No Real Roots"
    ENDIF
END FUNCTION

DECLARE variables a, b, c AS integers

PRINT "Enter coefficients a, b, and c: "
INPUT a, b, c

CALL Quad(a, b, c)
