## Greatest Common Divisor

### - Description

In *mathematics*, **the greatest common divisor (gcd)** of two or more integers, when at least one of them is not zero, is the largest positive integer that divides the numbers without a remainder. For example, the GCD of 8 and 12 is 4.

### - Complexity

Worst Case Complexity

![runningtime](https://wikimedia.org/api/rest_v1/media/math/render/svg/56389040bb6243447d5114e18bcb432645d66c99)

Worst Case Complexity Euclide

![euclidcomplexity](https://wikimedia.org/api/rest_v1/media/math/render/svg/09792da35693cf604db188d0c2cc221818d72f87)

### - Example

Divisors of 54: 

![Divisor54](https://wikimedia.org/api/rest_v1/media/math/render/svg/40a2d18005f4555de941921b8486c24e2d396f48)

Divisor of 24: 

![Divisor24](https://wikimedia.org/api/rest_v1/media/math/render/svg/a0aa699552b24cd17f0a65979370b7c3c4bb216d)

Common Divisors between 24 and 54: 

![Common](https://wikimedia.org/api/rest_v1/media/math/render/svg/83ddc330c52f384ed6ac503d6bbc2f30081b1f7b)

Therefore 

![gcd](https://wikimedia.org/api/rest_v1/media/math/render/svg/9998f8681384fe60dc94832a9a0ba19769dccbfb)

### - Euclidean Function

Euclidean function provided a recursive way of computing gcd as:

![base](https://wikimedia.org/api/rest_v1/media/math/render/svg/8f2e7dbf90c33d22cd4e0c8e1f1d088677b847d6)

![euclid](https://wikimedia.org/api/rest_v1/media/math/render/svg/50dcf31162a0922f36a606e0b0a95b2744039b0a)

Example: 

- gcd(30, 21) = gcd(21, 9)
- gcd(21, 9) = gcd(9, 3)
- gcd(9, 3) = gcd(3, 0)
- gcd(3, 0) = 3

```C++
int gcd(a, b) {
    return b==0? a : gcd(b, a%b);
}
```

### - Pseudocode

This is the basic logic behind gcd:

```
Input: a, b positive integers
Output: g and d such that g is odd and gcd(a, b) = g×2^d
    d := 0
    while a and b are both even do
        a := a/2
        b := b/2
        d := d + 1
    while a ≠ b do
        if a is even then a := a/2
        else if b is even then b := b/2
        else if a > b then a := (a – b)/2
        else b := (b – a)/2
    g := a
    output g, d
```

### - Reference

- [Wikipedia](https://en.wikipedia.org/wiki/Greatest_common_divisor)
