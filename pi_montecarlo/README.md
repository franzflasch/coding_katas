# Calculate PI using montecarlo method
Calculation is done using the square root of (x²*y²), which is slower but allows to specify a circle radius larger than 1.  

Compile with:
```console
gcc -O3 pi_montecarlo.c -o pi_montecarlo -lm
```
