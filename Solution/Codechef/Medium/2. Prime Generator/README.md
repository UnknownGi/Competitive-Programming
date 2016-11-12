## CC P2 - Prime Generator

### Problem Statement

```
Shridhar wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers.
```

### Constraints

```
1 ≤ m ≤ n ≤ 1 000 000 000
n-m ≤ 100000

Time Limit: 6sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Iterate over complete range **a ≤ x ≤ b**
- check even numbers for prime
- increment count by 1

The problem asks us to print prime numbers in a given range, this problem can be solved using Euclidean style or [!Sieve of Eratosthesis](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)

- Animation for Sieve

![Sieve](https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif)

### Problem Solving

First we need a function to check if a given value is prime:

```
func ifPrime(n): 
    input: n
    output: true/false
```

The function would if a given number is prime using the following condition, Here we deal with the increment and complete range checking problem, while checking from in between **3 ≤ x ≤ sqrt(n)** we decrease the complexity from **O(n)** to **O(n^1/2)**


```C++
for ( int i=3; i<=sqrt(n); i+=2 ) {
    if ( n%i==0 ) return false;
}
```

Finally we deal with extra values such as even numbers and 1.

```C++
if ( n==2 ) return true;
else if ( n%2==0 || n==1 ) return false;
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12086115
- Codechef solution link: https://www.codechef.com/viewsolution/12086115
- Time taken: 0.81sec
- Memory Allocated: 3.1MB
- Language: C++ 4.9.2
