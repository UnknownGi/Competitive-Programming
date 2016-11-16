## CC Beginner P4 - Factorial

### Problem Statement

```
The most important part of a GSM network is so called Base Transceiver Station (BTS). These transceivers form the areas called cells (this term gave the name to the cellular phone) and every phone connects to the BTS with the strongest signal (in a little simplified view). Of course, BTSes need some attention and technicians need to check their function periodically.

The technicians faced a very interesting problem recently. Given a set of BTSes to visit, they needed to find the shortest path to visit all of the given points and return back to the central company building. Programmers have spent several months studying this problem but with no results. They were unable to find the solution fast enough. After a long time, one of the programmers found this problem in a conference article. Unfortunately, he found that the problem is so called "Traveling Salesman Problem" and it is very hard to solve. If we have N BTSes to be visited, we can visit them in any order, giving us N! possibilities to examine. The function expressing that number is called factorial and can be computed as a product

1.2.3.4....N. The number is very high even for a relatively small N.

The programmers understood they had no chance to solve the problem. But because they have already received the research grant from the government, they needed to continue with their studies and produce at least some results. So they started to study behavior of the factorial function.

For example, they defined the function Z. For any positive integer N, Z(N) is the number of zeros at the end of the decimal form of number N!. They noticed that this function never decreases. If we have two numbers N1<N2, then Z(N1) <= Z(N2). It is because we can never "lose" any trailing zero by multiplying by any positive number. We can only get new and new zeros. The function Z is very interesting, so we need a computer program that can determine its value efficiently.
```

### Constraints

```
1 ≤ N ≤ 1 000 000 000

Time Limit: 8sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Computing Factorial and Calculating Zeroes
- Large Factorials Can't be Computed in C++ or Java (Not even BigInteger can solve 8735373!)

This question allows us to view a pattern in the test cases, first zero appears in 5! then 6! and so forth that mean, Z(N-1) ≤ Z(N) where Z(n) = no.of zeroes in number n. Therefore following this pattern we obtained the following:

```
###WHILE N >= 5
###    Zeroes += N/5, N/=5
```

### Problem Solving

Read a number and perform the following operation until the value is greater than 5

```C++
int o = 0;
while ( n >= 5 ) {
    o += n/5;
    n /= 5;
}
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 11548528
- Codechef solution link: https://www.codechef.com/viewsolution/11548528
- Time taken: 0.02sec
- Memory Allocated: 3.1MB
- Language: C++ 4.9.2
