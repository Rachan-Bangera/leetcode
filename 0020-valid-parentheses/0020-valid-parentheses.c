bool isValid(char* s) {
    char stack[10001];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // If opening bracket, push into stack
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }

        // If closing bracket
        else {

            // No opening bracket available
            if (top == -1) {
                return false;
            }

            // Check matching brackets
            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == '}' && stack[top] == '{') ||
                (s[i] == ']' && stack[top] == '[')) {

                top--;
            }
            else {
                return false;
            }
        }
    }

    // Stack should be empty
    return top == -1;
}