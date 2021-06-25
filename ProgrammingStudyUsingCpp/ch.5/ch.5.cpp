#include <iostream>
#include <std_lib_facilities.h>

int main()
{
    try
    {
        // 여기에 코드 산입
        
        //
        keep_window_open();
        return 0;
    }
    catch(exception& e)
    {
        cerr << "오류 : " << e.what() << endl;
        keep_window_open();
        return 1;
    }
    catch (...)
    {
        cerr << "이런 : 알려지지 않은 예외!" << endl;
        keep_window_open();
        return 2;
    }
}

/*
1. Cout << "success! \n"; // 식별자 Cout이 정의 되어 있지 않습니다.
2. cout << "Success!\n; // 닫는 따옴표가 없습니다.
3. cout << "Success" << !\n" // 인식할 수 없는 토큰입니다.
4. cout << success << '\n'; // 식별자 success가 정의되어 있지 않습니다.
5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; // int 에서 string으로 변환하기 위한 적절한 생성자가 없습니다.
6. vector<int> v(10); v(5) = 7; if (v(5) != 7) cout << "Success!\n"; // 적절한 operator() 또는 함수 포인터 형식에 대한 변환 함수가 없는 클래스 형식의 개체에 대한 호출입니다.
7. if (cond) cout << "Success!\n"; else cout << "Fail!\n"; // 식별자 cond이 정의 되어 있지 않습니다.
8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; // 오류 없음
9. string s = "ape"; boo c = "fool" < s; if (c) cout << "Success\n"; // 식별자 boo에 대한 정의가 없습니다.
10. string s = "ape"; if (s == "fool") cout << "Success!\n"; // 오류 없음
11. string s = "ape"; if (s == "foll") cout < "Success!\n"; // 이러한 피연산자 '>'와 일치하는 연산자가 없습니다. 
12. string s = "ape"; if (s + "fool") cout << "Success!\n"; // 식에 bool 형식(또는 bool로 변환할 수 있는 형식)이 있어야 합니다.
13. vector<char> v(5); for (int i = 0; i < v.size(); ++i); cout << "Success!\n"; // 논리 오류. 이렇게 하면 5번 출력이 안됨 무한 출력
14. vector<char> v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n"; // 논리 오류. 이렇게 하면 5번 출력이 안됨
15. string s = "Succuss!\n"; for (int i = 0; i < 6; ++i); cout << s[i]; // 식별자 i가 정의되어 있지 않음
16. if (true) then cout << "Success!\n"; else cout << "Fail!\n"; // 식별자 then이 정의되어 있지 않음
17. int x = 2000; char c = x; if (c == 2000) cout << "Success!\n"; // 오류는 없음 단 c = x 정상적으로 값이 할당되지 않을 것으로 보임(c에 -48 '?'가 할당됨)
18. string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i]; // 오류 없음 s에 문자열 갯수는 총 8개지만 s의 가장 끝에 \0이 있어서 길이는 딱 맞음
19. vector v(5); for (int i = 0; i <= v.size(); i++;); cout << "Success!\n"; // 템플릿 vector에 대한 인수 목록이 없습니다.
20. int i = 0; int j = 9; while (i < 10) ++j; if (j < i) cout << "Success!\n"; // 논리오류. while문에서 무한 반복
21. int x = 2; double d = 5 / (x - 2); if (d == 2 * x + 0.5) cout << "Success!\n"; // 런타임 오류 발생 0을 Integer division by zero
22. string<char> s = "Susccess!\n"; for (int i = 0; i <= 10; ++i) cout << s[i]; // string에 템플릿을 사용할 수 없습니다.
23. int i = 0; while (i < 10) ++j; if (j < i) cout << "Success!\n"; // 식별자 j가 정의되어 있지 않습니다.
24. int x = 4; double d = 5 / (x - 2) if (d = 2*x + 0.5) cout << "Success!\n"; // 논리오류 발생 if문에서 할당 식이 들어가면 항상 true
25. cin << "Success!\n"; // 이러한 피연산자와 일치하는 연산자 '<<' 가 없습니다
*/
