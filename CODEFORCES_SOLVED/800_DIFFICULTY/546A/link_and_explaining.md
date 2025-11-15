https://codeforces.com/problemset/problem/546/A

**Español:**

- w -> Bananas que se quieren comprar
- k -> El costo de las bananas aumenta linealmente respecto a k
    
        banana 1: 1k, banana 2: 2k, banana 3: 3k, ... banana i: ik

- n -> Cantidad de dolares que se tienen
- w -> bananas que se quieren comprar

Se quiere saber cuántos dólares se deben pedir prestados para obtener las w bananas. 

El costo total de las bananas $C$ es $\sum_{i=1}^{w} ik$, es decir:

$$ 
    C=\sum_{i=1}^{w} ik = k\left(\sum_{i=1}^{w} i\right) = k\left(\frac{w(w+1)}{2}\right)
$$

Para saber cuanto hay que pedir prestado, basta con restar el costo total $C$ a los dolares que se tienen $n$. Si ocurre que $C-n \leq 0$, entonces no hay que pedir prestado.

English: