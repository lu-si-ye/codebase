#include <iostream>
using namespace std;
int n;
int days(int n, int ans)
{
	if(n <= 3)
		return ans + n;
	else
		return days(n - (n + 2) / 3, ++ans);
}
int main()
{
	scanf(" %d", &n);
	printf("%d", days(n, 0));
	return 0;
}
