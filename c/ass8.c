#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int n = strlen(str);
    int isPalindrome = 1;

    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
