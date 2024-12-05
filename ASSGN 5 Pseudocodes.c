// // Assignment 5(1)

DECLARE array arr of size 10
DECLARE pointer ptr pointing to arr

SET ptr = address of arr

PRINT "[ "

FOR i FROM 0 TO 9 DO
    SET *(ptr + i) = i + 1
    PRINT *(ptr + i)
ENDFOR

PRINT "]"

RETURN 0


// // Assignment 5(2)

DECLARE array arr of size 10
DECLARE pointer ptr pointing to arr

SET ptr = address of arr

PRINT "[ "

FOR i FROM 0 TO 9 DO
    SET *(ptr + i) = i + 1
    PRINT ( *(ptr + i) MULTIPLIED BY *(ptr + i) )
ENDFOR

PRINT "]"

RETURN 0


// Assignment 5(3)

DECLARE array arr of size 5
DECLARE pointer ptr pointing to arr

SET ptr = address of arr

PRINT "Enter 5 values for the array:"

FOR i FROM 0 TO 4 DO
    INPUT *(ptr + i)
ENDFOR

PRINT "[ "

FOR i FROM 0 TO 4 DO
    PRINT ( *(ptr + i) MULTIPLIED BY *(ptr + i) )
ENDFOR

PRINT "]"

RETURN 0



// Assignment 5(4)

DECLARE variables n, max
DECLARE pointer ptr
DECLARE array arr of size n (size determined at runtime)

PRINT "Enter the size of array:"
INPUT n

DECLARE array arr of size n
SET ptr = address of arr[0]

PRINT "Enter the n elements of the array:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

SET max = *ptr

FOR i FROM 1 TO n - 1 DO
    IF *(ptr + i) > max THEN
        SET max = *(ptr + i)
    ENDIF
ENDFOR

PRINT "The largest element is: ", max

RETURN 0



// Assignment 5(5)

DECLARE variables n, ptr, p_max, p_min
DECLARE array arr of size n (size determined at runtime)

PRINT "Enter the size of array:"
INPUT n

DECLARE array arr of size n
SET ptr = address of arr[0]

PRINT "Enter the n elements of the array:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

SET p_max = ptr

FOR i FROM 1 TO n - 1 DO
    IF *(ptr + i) > *p_max THEN
        SET p_max = (ptr + i)
    ENDIF
ENDFOR
PRINT "The largest element is: ", *p_max

SET p_min = ptr

FOR i FROM 1 TO n - 1 DO
    IF *(ptr + i) < *p_min THEN
        SET p_min = (ptr + i)
    ENDIF
ENDFOR
PRINT "The smallest element is: ", *p_min

RETURN 0


// Assignment 5(6)

DECLARE variables n, even = 0, odd = 0
DECLARE array arr of size n (size determined at runtime)
DECLARE pointer ptr pointing to arr

PRINT "Enter the number of elements:"
INPUT n

DECLARE array arr of size n
SET ptr = address of arr[0]

PRINT "Enter the elements:"

FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
    IF *(ptr + i) MODULO 2 EQUALS 0 THEN
        INCREMENT even
    ELSE
        INCREMENT odd
    ENDIF
ENDFOR

PRINT "Even numbers: ", even, ", Odd numbers: ", odd

RETURN 0


//Assignment 5(7)

DECLARE variables num, sum = 0
DECLARE pointer total pointing to sum
DECLARE pointer n pointing to num
DECLARE pointer ptr

PRINT "Enter the size of the array:"
INPUT num

SET n = address of num
DECLARE array arr of size *n
SET ptr = address of arr[0]

PRINT "Enter the elements of the array:"

FOR i FROM 0 TO *n - 1 DO
    INPUT *(ptr + i)
    SET *total = *total + *(ptr + i)
ENDFOR

PRINT "The sum of elements of the array is: ", *total

RETURN 0



//Assignmnet 5(8)

DECLARE variables n, val, coun = -1
DECLARE array arr of size n (size determined at runtime)
DECLARE pointer ptr pointing to arr

PRINT "Enter the number of elements:"
INPUT n

DECLARE array arr of size n
SET ptr = address of arr[0]

PRINT "Enter the elements:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

PRINT "Enter the key to search:"
INPUT val

FOR i FROM 0 TO n - 1 DO
    IF *(ptr + i) EQUALS val THEN
        SET coun = i + 1
        BREAK
    ENDIF
ENDFOR

IF coun NOT EQUAL TO -1 THEN
    PRINT "Element found at position: ", coun
ELSE
    PRINT "Element not found"
ENDIF

RETURN 0



//Assignment 5(9)

DECLARE FUNCTION sort(arr, n)
    FOR i FROM 0 TO n - 2 DO
        FOR j FROM i + 1 TO n - 1 DO
            IF *(arr + i) > *(arr + j) THEN
                DECLARE temp = *(arr + i)
                SET *(arr + i) = *(arr + j)
                SET *(arr + j) = temp
            ENDIF
        ENDFOR
    ENDFOR
END FUNCTION

DECLARE variable n
DECLARE array arr of size n (size determined at runtime)
DECLARE pointer ptr pointing to arr

PRINT "Enter the number of elements:"
INPUT n

DECLARE array arr of size n
SET ptr = address of arr[0]

PRINT "Enter the elements:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

CALL sort(ptr, n)

PRINT "Sorted array: "
FOR i FROM 0 TO n - 1 DO
    PRINT *(ptr + i)
ENDFOR

RETURN 0



// Assignment 5(10)

DECLARE FUNCTION reverse(arr, n)
    FOR i FROM 0 TO (n DIVIDED BY 2) - 1 DO
        DECLARE temp = *(arr + i)
        SET *(arr + i) = *(arr + n - i - 1)
        SET *(arr + n - i - 1) = temp
    ENDFOR
END FUNCTION

DECLARE variable n
DECLARE array arr of size n (size determined at runtime)
DECLARE pointer ptr pointing to arr

PRINT "Enter the number of elements:"
INPUT n

DECLARE array arr of size n
SET ptr = address of arr[0]

PRINT "Enter the elements:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

PRINT "Original array: "
FOR i FROM 0 TO n - 1 DO
    PRINT *(ptr + i)
ENDFOR

CALL reverse(ptr, n)

PRINT "Reversed array: "
FOR i FROM 0 TO n - 1 DO
    PRINT *(ptr + i)
ENDFOR

RETURN 0



// Assignment 5(11)

DECLARE FUNCTION convertToBinary(n, binary, size)
    DECLARE variable i = 0
    WHILE n > 0 DO
        SET *(binary + i) = n MODULO 2
        SET n = n DIVIDED BY 2
        INCREMENT i
    ENDWHILE
    SET *size = i
END FUNCTION

DECLARE variable n
DECLARE array binary of size 32
DECLARE variable size
DECLARE pointer ptr pointing to binary

PRINT "Enter a positive decimal integer:"
INPUT n

CALL convertToBinary(n, ptr, address of size)

PRINT "Binary representation: "
FOR i FROM size - 1 TO 0 DO
    PRINT *(ptr + i)
ENDFOR

RETURN 0


// Assignment 5(12)    

DECLARE arrays arr1[5], arr2[5], result[5]
DECLARE pointers ptr1 pointing to arr1, ptr2 pointing to arr2, res pointing to result

PRINT "Enter 5 elements for the first array:"
FOR i FROM 0 TO 4 DO
    INPUT *(ptr1 + i)
ENDFOR

PRINT "Enter 5 elements for the second array:"
FOR i FROM 0 TO 4 DO
    INPUT *(ptr2 + i)
ENDFOR

PRINT "Resultant array: "
FOR i FROM 0 TO 4 DO
    SET *(res + i) = *(ptr1 + i) + *(ptr2 + i)
    PRINT *(res + i)
ENDFOR

RETURN 0


// Assignment 5(13)

DECLARE array arr[10]
DECLARE pointer ptr pointing to arr

PRINT "Enter 10 elements:"
FOR i FROM 0 TO 9 DO
    INPUT *(ptr + i)
ENDFOR

FOR i FROM 0 TO 9 WITH STEP 2 DO
    DECLARE temp = *(ptr + i)
    SET *(ptr + i) = *(ptr + i + 1)
    SET *(ptr + i + 1) = temp
ENDFOR

PRINT "Swapped array: "
FOR i FROM 0 TO 9 DO
    PRINT *(ptr + i)
ENDFOR

RETURN 0


// Assignment 5(14)

DECLARE variable n, pos, value
PRINT "Enter the number of elements:"
INPUT n

DECLARE array arr of size (n + 1)
DECLARE pointer ptr pointing to arr

PRINT "Enter the elements:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

PRINT "Enter the position and value to insert:"
INPUT pos, value

FOR i FROM n TO pos STEP -1 DO
    SET *(ptr + i) = *(ptr + i - 1)
ENDFOR

SET *(ptr + pos - 1) = value

PRINT "Updated array: "
FOR i FROM 0 TO n DO
    PRINT *(ptr + i)
ENDFOR

RETURN 0



// Assignment 5(15)

DECLARE variables n, pos
PRINT "Enter the number of elements:"
INPUT n

DECLARE array arr of size n
DECLARE pointer ptr pointing to arr

PRINT "Enter the elements:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

PRINT "Enter the position to delete:"
INPUT pos

FOR i FROM pos - 1 TO n - 2 DO
    SET *(ptr + i) = *(ptr + i + 1)
ENDFOR

PRINT "Updated array:"
FOR i FROM 0 TO n - 2 DO
    PRINT *(ptr + i)
ENDFOR

RETURN 0


// Assignment 5(16)

DECLARE variable n
PRINT "Enter the number of elements:"
INPUT n

DECLARE array arr of size n
DECLARE pointer ptr pointing to arr

PRINT "Enter the elements:"
FOR i FROM 0 TO n - 1 DO
    INPUT *(ptr + i)
ENDFOR

DECLARE variable newSize = 0

FOR i FROM 0 TO n - 1 DO
    DECLARE variable duplicate = 0
    FOR j FROM 0 TO newSize - 1 DO
        IF *(ptr + j) == *(ptr + i) THEN
            SET duplicate = 1
            BREAK
        ENDIF
    ENDFOR
    IF duplicate == 0 THEN
        SET *(ptr + newSize) = *(ptr + i)
        INCREMENT newSize
    ENDIF
ENDFOR

PRINT "Array after removing duplicates:"
FOR i FROM 0 TO newSize - 1 DO
    PRINT *(ptr + i)
ENDFOR

RETURN 0
