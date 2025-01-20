// 1 

DECLARE string str[100]
DECLARE integer length = 0
DECLARE pointer ptr

PRINT "Enter a string: "

INPUT str

SET ptr = str

WHILE *ptr IS NOT equal to '\0' AND *ptr IS NOT equal to '\n' DO
    SET length = length + 1
    SET ptr = ptr + 1
ENDWHILE

PRINT "The length of the string is: ", length


// 2 

DECLARE string str1[100]
DECLARE string str2[100]
DECLARE pointer ptr
SET ptr = str1

PRINT "Enter the string: "

INPUT str1

DECLARE integer i = 0

WHILE *ptr IS NOT equal to '\0' DO
    SET str2[i] = str1[i]
    SET i = i + 1
    SET ptr = ptr + 1
ENDWHILE

SET str2[i] = '\0'

PRINT "The copied string is: ", str2


// 3 
 
DECLARE string str1[100]
DECLARE string str2[100]

PRINT "Enter the 1st string: "
INPUT str1

PRINT "Enter the 2nd string: "
INPUT str2

DECLARE integer count = 0
DECLARE integer i = 0

WHILE str1[i] IS NOT equal to '\0' OR str2[i] IS NOT equal to '\0' DO
    IF str1[i] IS NOT equal to str2[i] THEN
        SET count = count + 1
    ENDIF
    SET i = i + 1
ENDWHILE

IF count IS equal to 0 THEN
    PRINT "Strings are Equal."
ELSE
    PRINT "Strings are not Equal."
ENDIF


// 4 

DECLARE string str1[100]
DECLARE string str2[100]
DECLARE string result[200]
DECLARE integer i = 0
DECLARE integer j = 0

PRINT "Enter the first string: "
INPUT str1

PRINT "Enter the second string: "
INPUT str2

WHILE str1[i] IS NOT equal to '\0' DO
    SET result[i] = str1[i]
    SET i = i + 1
ENDWHILE

WHILE str2[j] IS NOT equal to '\0' DO
    SET result[i] = str2[j]
    SET i = i + 1
    SET j = j + 1
ENDWHILE

SET result[i] = '\0'

PRINT "Concatenated String: ", result


// 5 

DECLARE string str[100]
DECLARE integer length = 0
DECLARE integer i
DECLARE integer isPalindrome = 1

PRINT "Enter a string: "
INPUT str

WHILE str[length] IS NOT equal to '\0' DO
    SET length = length + 1
ENDWHILE

FOR i = 0 TO length DIVIDED by 2 - 1 DO
    IF str[i] IS NOT equal to str[length - i - 1] THEN
        SET isPalindrome = 0
        BREAK
    ENDIF
ENDFOR

IF isPalindrome IS equal to 1 THEN
    PRINT "The string is a palindrome."
ELSE
    PRINT "The string is not a palindrome."
ENDIF


// 6 

DECLARE string str[100]
DECLARE string reversed[100]
DECLARE integer length = 0
DECLARE integer i

PRINT "Enter a string: "
INPUT str

WHILE str[length] IS NOT equal to '\0' DO
    SET length = length + 1
ENDWHILE

FOR i = 0 TO length - 1 DO
    SET reversed[i] = str[length - i - 1]
ENDFOR

SET reversed[length] = '\0'

PRINT "Reversed String: ", reversed


// 7

DECLARE string line[200]
DECLARE integer i = 0
DECLARE integer charCount = 0
DECLARE integer wordCount = 0

PRINT "Enter a line of text: "
INPUT line

WHILE line[i] IS NOT equal to '\0' DO
    IF line[i] IS NOT equal to '\n' THEN
        SET charCount = charCount + 1
    ENDIF

    IF (line[i] IS NOT equal to ' ' AND line[i] IS NOT equal to '\n') AND 
       (line[i + 1] IS equal to ' ' OR line[i + 1] IS equal to '\n' OR line[i + 1] IS equal to '\0') THEN
        SET wordCount = wordCount + 1
    ENDIF

    SET i = i + 1
ENDWHILE

PRINT "Number of characters: ", charCount
PRINT "Number of words: ", wordCount


// 8

DECLARE string str[100]
DECLARE integer i = 0
DECLARE integer vowels = 0
DECLARE integer consonants = 0

PRINT "Enter a string: "
INPUT str

WHILE str[i] IS NOT equal to '\0' DO
    DECLARE char ch = str[i]

    IF ch IS equal to 'a' OR ch IS equal to 'e' OR ch IS equal to 'i' OR ch IS equal to 'o' OR ch IS equal to 'u' OR
       ch IS equal to 'A' OR ch IS equal to 'E' OR ch IS equal to 'I' OR ch IS equal to 'O' OR ch IS equal to 'U' THEN
        SET vowels = vowels + 1
    ELSE IF (ch IS greater than or equal to 'a' AND ch IS less than or equal to 'z') OR (ch IS greater than or equal to 'A' AND ch IS less than or equal to 'Z') THEN
        SET consonants = consonants + 1
    ENDIF

    SET i = i + 1
ENDWHILE

PRINT "Number of vowels: ", vowels
PRINT "Number of consonants: ", consonants
