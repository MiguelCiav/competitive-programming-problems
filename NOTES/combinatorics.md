# Combinatorics Cheatsheet for Competitive Programming

This document covers essential formulas and concepts for counting problems, ordered by difficulty and implementation complexity.

## The Foundations

### 1. Factorial

The number of ways to arrange $n$ distinct items in a row.
$$n! = n \times (n-1) \times \dots \times 1$$

- **Base case:** $0! = 1$
- **Recursive:** $n! = n \times (n-1)!$

### 2. Permutations ($nPr$)

The number of ways to choose **and arrange** $k$ items from a set of $n$ distinct items. **Order matters.**
$$P(n, k) = \frac{n!}{(n-k)!}$$

### 3. Combinations ($nCr$)

The number of ways to choose $k$ items from $n$ distinct items. **Order does not matter.**
$$\binom{n}{k} = C(n, k) = \frac{n!}{k!(n-k)!}$$

- **Symmetry property:** $\binom{n}{k} = \binom{n}{n-k}$

### 4. Rule of Sum vs. Product

- **Rule of Sum (OR):** If you can do task A in $m$ ways **OR** task B in $n$ ways (and they are mutually exclusive), there are $m + n$ ways.
- **Rule of Product (AND):** If you can do task A in $m$ ways **AND** task B in $n$ ways, there are $m \times n$ ways.

---

## Intermediate Tools

### 1. Pascal's Identity (DP Approach)

Used to compute Combinations without factorials (avoiding overflow if not using modulo) or to precompute a table.
$$\binom{n}{k} = \binom{n-1}{k-1} + \binom{n-1}{k}$$

- **Complexity:** $O(n^2)$ to build the table.

### 2. Stars and Bars (Multiset Coefficients)

The number of ways to distribute $n$ indistinguishable items (Stars) into $k$ distinguishable bins (defined by Bars).

- **Formula:**
  $$\binom{n+k-1}{k-1}$$
- **Example:** Number of non-negative integer solutions to $x_1 + x_2 + \dots + x_k = n$.

### 3. Hockey Stick Identity

Useful for summing combinations in a diagonal on Pascal's Triangle.
$$\sum_{i=r}^{n} \binom{i}{r} = \binom{n+1}{r+1}$$

## Advanced Concepts

### 1. Inclusion-Exclusion Principle

Used to calculate the size of the union of multiple sets by subtracting the overlaps.
$$|A \cup B| = |A| + |B| - |A \cap B|$$

- **General Form:**
  $$|\cup A_i| = \sum |A_i| - \sum |A_i \cap A_j| + \sum |A_i \cap A_j \cap A_k| - \dots$$

### 2. Catalan Numbers ($C_n$)

A sequence of natural numbers that occurs in many recursive counting problems.

- **Sequence:** 1, 1, 2, 5, 14, 42, 132...
- **Formula:**
  $$C_n = \frac{1}{n+1}\binom{2n}{n}$$
- **Applications:**
  - Number of valid parenthesis expressions of length $2n$.
  - Number of full binary trees with $n+1$ leaves.
  - Number of ways to triangulate a polygon with $n+2$ sides.

### 3. Derangements ($!n$ or $D_n$)

Permutations of elements where **no** element appears in its original position.

- **Recursive Formula:**
  $$D_n = (n-1)(D_{n-1} + D_{n-2})$$
- **Base cases:** $D_1 = 0, D_2 = 1$.

## ⚫ Level 4: The "Hardest" (Expert)

### 1. Lucas Theorem

Used to compute $\binom{n}{k} \pmod p$ where $n$ and $k$ are huge (e.g., $10^{18}$) but $p$ is a small prime.
$$\binom{n}{k} \equiv \prod_{i=0}^m \binom{n_i}{k_i} \pmod p$$

- Where $n_i$ and $k_i$ are the digits of $n$ and $k$ in base $p$.

### 2. Cayley's Formula

The number of spanning trees of a complete graph labeled with $n$ vertices.
$$T_n = n^{n-2}$$

### 3. Stirling Numbers of the Second Kind ($S(n, k)$)

The number of ways to partition a set of $n$ objects into $k$ non-empty indistinguishable subsets.
$$S(n,k) = \frac{1}{k!} \sum_{j=0}^{k} (-1)^{k-j} \binom{k}{j} j^n$$

### 4. Burnside's Lemma / Polya Enumeration Theorem

Used for counting distinct objects under symmetry (e.g., coloring a necklace where rotation makes two colorings equivalent).
$$N = \frac{1}{|G|} \sum_{g \in G} |X^g|$$

- Where $N$ is the number of distinct orbits, $|G|$ is the size of the symmetry group, and $|X^g|$ is the number of elements unchanged by operation $g$.

---

## Modular Arithmetic

For most CP problems requiring $\binom{n}{k} \pmod P$, you cannot simply divide. You must use **Modular Inverse**.

**Fermat's Little Theorem:**
If $P$ is prime, then:
$$a^{P-2} \equiv a^{-1} \pmod P$$

Therefore, to calculate $\frac{n!}{k!(n-k)!} \pmod P$:

1.  Precompute factorials modulo $P$.
2.  Calculate $n! \times (k!)^{-1} \times ((n-k)!)^{{-1}} \pmod P$.

---
