# Random Fixed-Point Binary Generator

This project implements a **Fixed-Point Number Generator** in C. It constructs 5-bit binary sequences with a variable decimal point position and converts them to floating-point values based on specific constraints.

## ⚙️ Algorithm Logic

The generation process follows these rules:

1.  **Structure ($X + Y = 5$):**
    * Each number consists of 5 bits.
    * **$X$ bits:** Represent the Integer part.
    * **$Y$ bits:** Represent the Fractional part (Randomly assigned $1 \le Y \le 3$).
2.  **Constraint (Parity Balance):**
    * The generated bits must satisfy the condition: $|Count(1) - Count(0)| = 1$.
    * Example: Three `1`s and Two `0`s (Difference = 1).
3.  **Conversion:**
    * Calculates the decimal value using powers of 2 for $X$ and negative powers of 2 for $Y$.

### Mathematical Example
Given Binary: `10101` with $Y=2$ (Last 2 bits are fractional).
* **Split:** `101` (Integer) . `01` (Fractional)
* **Integer Calculation:** $1\cdot2^2 + 0\cdot2^1 + 1\cdot2^0 = 4 + 0 + 1 = 5$
* **Fractional Calculation:** $0\cdot2^{-1} + 1\cdot2^{-2} = 0 + 0.25 = 0.25$
* **Result:** `5.25`

## 🚀 Output Example

```text
--- 5-Bit Sabit Noktali Sayi Ureteci (N=6) ---
Format: [Indeks] [Bitler] (X:Tam, Y:Ondalik) -> [Sonuc]
-------------------------------------------------------
1. Sayi: 10101     [Tam(X):3 | Ondalik(Y):2]     Sonuc: 5.250
2. Sayi: 11100     [Tam(X):2 | Ondalik(Y):3]     Sonuc: 3.000
3. Sayi: 01110     [Tam(X):4 | Ondalik(Y):1]     Sonuc: 7.000
