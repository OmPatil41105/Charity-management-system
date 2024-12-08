#include<iostream>  
#include<cctype>    
#include<cstring>  
using namespace std;  
  
char stack[30];  
int top = -1, length;  
  
void push(char x) {  
    if (top == 29) {    
        cout << "STACK OVERFLOW\n";  
    } else {  
        top++;  
        stack[top] = x;  
    }  
}  
  
char pop() {  
    if (top == -1) {  
        cout << "STACK UNDERFLOW\n";  
        return '\0';  
    } else {  
        return stack[top--];  
    }  
}  
  
int main() {  
    int i;  
    int count = 0;  
    char c[40];  
    char r[40];     
  
    cout << "Enter the statement: ";  
    cin.getline(c, 40);  
  
    length = strlen(c);  
    cout << length << endl;  
  
    for (i = 0; i < length; i++) {  
        c[i] = tolower(c[i]);   
    }  
  
    cout <<"Lower Case string: "<< c;  
  
    for (i = 0; i < length; i++) {  
        if (c[i] == ' ' || ispunct(c[i]))  
        {  
        } else {  
            push(c[i]);  
            r[count] = c[i];    
            count++;  
        }  
    }  
  
    r[count] = '\0';   
  
    cout << "\nStack becomes: " << stack;  
    cout << "\nString becomes: " << r << endl;  
  
    int flag = 1;  
    for (i = 0; i < count; i++) {  
        if (pop() == r[i])  
        {  
              
        }  
        else{  
            flag = 0;  
            break;  
        }  
    }  
  
    if (flag == 1) {  
        cout << "\nPalindrome" << endl;  
    } else {  
        cout << "\nNot a Palindrome" << endl;  
    }  
return 0;  
} 
