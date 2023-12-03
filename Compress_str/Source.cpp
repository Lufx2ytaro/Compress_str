#include <iostream>
#include <string>

using namespace std;



void compress(string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			str.erase(i,1);
			i--;
		}
	}
	cout << str << endl;
	
};
void replays(string str)
{
	if (str != "")
	{
		int b = 0;
		for (size_t i = 0; i < (str.length() - 1); i++)
		{
			if (str[i] == ' ' && str[i + 1] == ' ')
			{
				b++;
			}
			else
			{
				compress(str);
				break;
			}
		}
	}
	else
	{
		cout << "Your text haven't words" << endl;
	}
	cout << "size of string - " << str.length();
	
}






int main()
{

	string s = "H    e    l  l                            o              ";
	replays(s);
	cout << endl;
	

	return 0;
}