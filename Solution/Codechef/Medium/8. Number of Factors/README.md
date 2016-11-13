## CC P8 - Number of Factors

### Problem Statement

```
Alice has learnt factorization recently. Bob doesn't think she has learnt it properly and hence he has decided to quiz her. Bob gives Alice a very large number and asks her to find out the number of factors of that number. To make it a little easier for her, he represents the number as a product of N numbers. Alice is frightened of big numbers and hence is asking you for help. Your task is simple. Given N numbers, you need to tell the number of distinct factors of the product of these N numbers.
```

### Constraints

```
1 ≤ T ≤ 100
1 ≤ N ≤ 10
2 ≤ Ai ≤ 1000000

Time Limit: 1sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Iterating from 1 to N to find all factors
- Multiplying all the Ai values to find N (this won't fit in unsigned long long due to the fact that it will be 1000000^10 at worst case)

This problem asks us to check number of factors that can exists for a particular product N. This problem requires knowlege about [Integer Factorization](https://en.wikipedia.org/wiki/Integer_factorization) and also [Divisor Function](https://en.wikipedia.org/wiki/Divisor_function)

![Factorization](https://upload.wikimedia.org/wikipedia/commons/thumb/b/bf/PrimeDecompositionExample.svg/190px-PrimeDecompositionExample.svg.png)

This problem can be solved by individually finding the factors for each Ai element that is a product of N. According to the Divisor Function we would generate the same number of factors using this property.

Ex: 504 = 2^***3*** * 3^***2*** * 7^***1***
Therefore (3+1)*(2+1)*(1+1) = 24

504 has **24 factors**

### Problem Solving

The problem is solved finding factors of individual elements Ai

```C++
REPN(i,0,n) {
    scanf("%lld", &tmp);
    factor(tmp);
}
```

we need a way to keep track of all the divisors at the end via map or set

```C++
map<LLD, LLD> mp;
map<LLD, LLD>::iterator it;
```

factor function is as follows

```C++
void factor ( LLD n ) {
	REPNE(i,2,sqrt(n)) {
		while ( n%i==0 ) {
			mp[i]++;
			n /= i;
		}
	}
	
	if ( n!=1 ) mp[n]++;
}
```

and finally find the number of divisors with the help or map/set

```C++
LLD fact=1;
for ( it=mp.begin(); it!=mp.end(); ++it ) fact *= (it->second+1);
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12097209
- Codechef solution link: https://www.codechef.com/viewsolution/12097209
- Editorial: https://discuss.codechef.com/questions/15943/numfact-editorial
- Time taken: 0sec
- Memory Allocated: 3.2MB
- Language: C++ 4.9.2
