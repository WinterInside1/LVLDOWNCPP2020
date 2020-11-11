#include <iostream>

using namespace std;

string int_to_str(int a) {
	int div = 1, len = 0;
	string result = "";
	while (a >= div)
	{
		div *= 10;
		len++;
	}
	div /= 10;
	for (int i = len; i > 0; i--)
	{
		result += (char)(a / div % 10 + 48);
		div /= 10;
	}
	return result;
}

int main()
{
	string inp_str, out_str = "";
	int counter = 1;
	cin >> inp_str;
	char last_char = inp_str[0];
	for (int i = 1; i < inp_str.size(); i++)
	{
		if (last_char != inp_str[i]) {
			out_str.push_back(last_char);
			out_str += int_to_str(counter);
			last_char = inp_str[i];
			counter = 1;
			if (i == inp_str.size() - 1) {
				out_str.push_back(last_char);
				out_str += int_to_str(counter);
				break;
			}
		}
		else if (i == inp_str.size() - 1) {
			out_str.push_back(last_char);
			out_str += int_to_str(++counter);
			break;
		}
		else {
			counter++;
		}
	}
	cout << out_str;
	return 0;
}