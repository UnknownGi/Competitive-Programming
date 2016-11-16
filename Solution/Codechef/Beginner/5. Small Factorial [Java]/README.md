## CC Beginner P5 - Small Factorials

### Problem Statement

```
You are asked to calculate factorials of some small positive integers.
```

### Constraints

```
1 ≤ t ≤ 100
1 ≤ n ≤ 100

Time Limit: 1sec
Memory Limit: 2 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Trying to Solve this in C++ using int, long, long long, unsigned long long datatypes

This problem requires direct knowledge of factorial, hence:

![Fact](https://wikimedia.org/api/rest_v1/media/math/render/svg/2d272d2bb141519824f2df4458c2670f117d234f)

5! Example

![5fact](https://wikimedia.org/api/rest_v1/media/math/render/svg/0ca46f9dbe0448adb8bdb51d3ca0c5097b945ed2)

### Problem Solving

This problem can be solved by using an int[200] array size in C++ and iterating over each cell (which is complicated) or by using the BigInteger datatype in Java programming language, The following is the way to computer factorial using BigInteger:

```Java
int n = sc.nextInt();
            
BigInteger bi = new BigInteger("1");
for ( int j=2; j<=n; ++j ) bi = bi.multiply(BigInteger.valueOf(j));
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 11548880
- Codechef solution link: https://www.codechef.com/viewsolution/11548880
- Time taken: 0.08sec
- Memory Allocated: 1.49MB
- Language: Java8
