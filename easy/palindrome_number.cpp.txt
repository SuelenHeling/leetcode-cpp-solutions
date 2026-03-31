/*
Problema: Palindrome Number
Plataforma: LeetCode

Lógica:
- inverter o número
- comparar com o original
*/

class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long invertido = 0;

        if (x < 0) return false;

        while (x > 0) {
            int digito = x % 10;
            x = x / 10;
            invertido = (invertido * 10) + digito;
        }

        return original == invertido;
    }
};