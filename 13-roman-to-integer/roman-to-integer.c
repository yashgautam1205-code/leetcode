#include <stdio.h>
#include <string.h>

// Helper function to get the integer value of a Roman character
int getRomanValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}

int romanToInt(char* s) {
    int total = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int currentVal = getRomanValue(s[i]);
        
        // If the current character's value is less than the next character's value,
        // it's a subtraction case (e.g., IV where I < V)
        if (i + 1 < len && currentVal < getRomanValue(s[i + 1])) {
            total -= currentVal;
        } else {
            total += currentVal;
        }
    }

    return total;
}