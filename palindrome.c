#include <stdio.h>
#include <string.h>

int isPalindrome_stack(const char *s) {
    int n = (int)strlen(s);
    char st[1024]; // assumes length <= 1024
    int top = -1;

    for (int i = 0; i < n/2; i++) st[++top] = s[i];

    int start = (n % 2 == 0) ? n/2 : n/2 + 1;
    for (int i = start; i < n; i++) {
        if (top < 0 || st[top--] != s[i]) return 0;
    }
    return top == -1;
}

int main() {
    char s[1024];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    printf("%s\n", isPalindrome_stack(s) ? "YES" : "NO");
    return 0;
}
