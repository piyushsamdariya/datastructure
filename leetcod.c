bool isValid(char* s) {
    int top=-1;
     int end=strlen(s)-1;
     int stack[10000];
       for (int i = 0; i < strlen(s); i++) {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }

        else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if (top == -1) {
                return false;
            }

            char topChar = stack[top--];
            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == '}' && topChar != '{') ||
                (s[i] == ']' && topChar != '[')) {
                return false;
            }
        }
    }


    return (top == -1);
}
