ASCII in OPAL
=============

A structure for converting operations between Nat and Char.


##Functions##

```
-- Converts a character into a nat
-- @param: char to be converted
-- @return: position of char in the ascii-code
FUN charToNat : char -> nat

--Converts a nat into a char
-- @param: nat position of char in the ascii-code
-- @return: corresponding char from the ascii-code
-- @return: space if nat < 33 || nat > 125
FUN natToChar : nat -> char
```
