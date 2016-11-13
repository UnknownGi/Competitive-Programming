## CC P5 - The Next Palindrome

### Problem Statement

```
A positive integer is called a palindrome if its representation in the decimal system is the same when read from left to right and from right to left. For a given positive integer K of not more than 1000000 digits, write the value of the smallest palindrome larger than K to output. Numbers are always displayed without leading zeros.
```

### Constraints

```
1 ≤ digits(N) ≤ 1 000 000

Time Limit: 9sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Iterating numbers by adding 1 to the previous number until palindromic number isn't found
- Max value won't fit in any int datatype

This problem deals with generating the next palindromic number. Seems like an easy problem but the iterative approach(common to most people), will fail because the number of digits are quite high for the worst case

### Problem Solving

The problem is solved by creating a mirror of the number, to generate its palindrome

```
support a number input: LLLRRR
will be converted to: LLLLLL

E.g: 123456 will be converted to 123321
```

Next we need is a comparison statement

```C++
if ( newValue > readValue ) return newValue; // This statement returns the new palindrome value if it was greater than the value that we read in the beginning
```

The problems occur in handling values such as 9, 99, 999, 9999 as they will be changed to 11, 101, 1001, 10001 and so forth.

```C++
if ( check_9(str) ) { // Check if a String has all 9's
    s += '1';
    REPN(i,0,str.size()-1) s+='0';
    s += '1';
}
```

Another problem to deal with is if the read number has a midpoint of 99 in between. E.g xx99xx, x9x etc.

This will shift any number and produce a carry that will deal numbers like: 2994 to 3003.

```C++
while ( s[x]=='9' && s[y]=='9' ) {
    s[x]='0';
    s[y]='0';
	--x;
	++y;	
}
		
s[x]++;
if ( y!=x ) s[y]++;
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12093554
- Codechef solution link: https://www.codechef.com/viewsolution/12093554
- Time taken: 0.32sec
- Memory Allocated: 3.2MB
- Language: C++ 4.9.2
