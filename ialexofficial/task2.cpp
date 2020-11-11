#include <iostream>

using namespace std;

int main()
{
	int hp;
	float result = 0;
	for (int i = 0; i < 100000; i++)
	{
		hp = 100;
		for (int j = 0; j < 40; j++)
		{
			hp += 2;
			hp -= 2 + rand() % 5;
			if (hp <= 0) {
				break;
			}
		}
		if (hp <= 0) {
			result++;
		}
	}
	cout << result / 1000 << "%";
	return 0;
}