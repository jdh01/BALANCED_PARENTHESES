#include <iostream>
#include <stack>
#include <string>

bool CheckBalancedParentheses(const char* C)
{
	std::stack<char> S;
	int n = strlen(C);
	for (int i = 0; i <= n-1; i++)
	{
		if (C[i] == '(' || C[i] == '{' || C[i] == '[')
			S.push(C[i]);
		else if (C[i] == ')' || C[i] == '}' || C[i] == ']')
		{
			if (S.empty()) {
				return false;
			}
			else {
				S.pop();
			}
		}
	}
	return S.empty();
}

int main()
{
	const char* Paren = "(()))";
	bool IsBalan = CheckBalancedParentheses(Paren);
	std::cout << "1 = Parentheses are balanced, 0 = unblanced: ";
	std::cout << IsBalan << std::endl;;
}

/*
EXAMPLES:
)( BAD
[()] GOOD
[(]) BAD
[()()] GOOD
*/