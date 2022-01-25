using namespace std;
#define MAX 99000
class Stack {
	int top;
public:
	int a[MAX];

	Stack() { top = -1; }
	bool push(char x);
	char pop();
	char peek();
    bool isEmpty();

};

bool Stack::push(char x)
{
    if (top >= (MAX - 1)) {
        return false;
    }
    else {
        a[++top] = x;
        return true;
    }
}

char Stack::pop()
{
    if (top < 0) {
    return 0;
    }
    else {
        char x = a[top--];
        return x;
    }
}
char Stack::peek()
{
    if (top < 0) {
        return 0;
    }
    else {
        char x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}

class Solution {
public:
    int lengthOfLastWord(string s) {
     class Stack ss;
        for(int i = 0;i<s.length();i++)
        {
            ss.push(s[i]);
        }
    int cou = 0;
    while(!ss.isEmpty())
    {
        if(cou > 0 && ss.peek() == ' ')
        {
            return cou;
        }
        if(ss.peek() != ' ')
        {
            cou = cou + 1;
            ss.pop();
            continue;
        }
        if(ss.peek() == ' ')
        {
            ss.pop();
            continue;
        }
    }
        return cou;
    }
};