///week01-2.cpp SOIT106_ADVANCE_001
/// C++版本, 在多寫一些中文的註解
#include <stdio.h> ///使用IO串流的外掛
using namespace std; ///使用STD命名空間
int main()
{
	int N;
	cin >> N; /// console input 到右邊的 N
	int b = N, ans = 0;
	while (N>0) {
		ans = ans*10 + N%10;
		N = N / 10;
	}
	/// console output 依序送出去
	/// 下面有1個錯的版本、3個正確的版本
	/// 錯誤 cout << b << ans << b+ans; /// 錯! 少了 += 跳行
	/// 正確 cout << b << "+" << ans << "=" << b+ans << "\n"; /// 正確1
	/// 正確 cout << b << "+" << ans << "=" << b+ans << endl; /// 正確2
	printf("%d %d %d\n", b, ans, ans+b)
}
