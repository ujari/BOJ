#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	
	while (1) {
		int b = 0;
		string str = "init";
		getline(cin, str);
		if (str==".")return 0;
		stack<char> st;
		string::iterator i = str.begin();
		while (*i != '.')
		{
			if (*i == '(' || *i == '[')
			{
				st.push(*i);
			}
			else if (*i == ')' || *i == ']')
			{
			
				if (st.empty() && b == 0)
				{
					cout << "no\n";
					b = 1;
					i++;
					continue;	

				}
				else if ((st.empty() && b == 1))
				{
					i++;
					continue;

				}
				
				char temp = st.top();
				st.pop();

				if ((temp == '[' && *i == ')')&&b==0)
				{
					cout << "no\n";
					b = 1;
					i++;
					continue;
				}
				else if ((temp == '(' && *i == ']') && b == 0)
				{
					cout << "no\n";
					b = 1;
					i++;
					continue;
				}
				
					
			}
			i++;
		}
		if (b)continue;
		if (st.empty()&&b==0)cout << "yes\n";
		else if(!st.empty()&&b==0)cout << "no\n";

	}
	return 0;
}