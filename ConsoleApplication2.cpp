#include <iostream>
#include <string>
#include <cmath>
using namespace std;

short SumNumber(short num)
{
    short Sum = 0;
    while (num > 0)
    {
        short temp = num % 10;
        Sum += temp;
        num /= 10;
    }
    return Sum;
}

int Reversed_Number(int Num)
{
    int Reversed = 0;

    while (Num > 0)
    {
        short Temp = Num % 10;
        Reversed = Reversed * 10 + Temp;
        Num /= 10;
    }

    return Reversed;
}

short Small_Number(short N, short M) {
    return N < M ? N : M;
}

short Big_Number(short N, short M) {
    return N > M ? N : M;
}


int main() 
{
    // Loop شيت اسيوط
    return 0;
}







void _1_to_N()
{
    short N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << i << "\n";
    }
}

void  Even_Numbers()
{
    short N;
    cin >> N;
    short C = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
            C++;
        }
    }
    if (C == 0)
        cout << -1;
}

void Even_Odd_Positive_and_Negative()
{
    short N;
    cin >> N;

    int M;
    int Even = 0, Odd = 0, Positive = 0, Negative = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> M;
        if (M % 2 == 0) Even++;
        else Odd++;

        if (M > 0) Positive++;
        else if (M < 0) Negative++;
    }

    cout << "Even: " << Even << "\n";
    cout << "Odd: " << Odd << "\n";
    cout << "Positive: " << Positive << "\n";
    cout << "Negative: " << Negative << "\n";
}

void Fixed_Password()
{
    while (true)
    {
        short N;
        cin >> N;
        if (N == 1999)
        {
            cout << "Correct";
            break;
        }
        else cout << "Wrong\n";
    }
}

void Max()
{
    short N;
    cin >> N;

    int X;
    int Max = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X;
        if (X > Max) Max = X;
    }
    cout << Max;
}

void Multiplication_table()
{
    short N;
    cin >> N;
    for (int i = 1; i <= 12; i++)
        cout << N << " * " << i << " = " << N * i << "\n";
}

void Factorial()
{
    short T;
    cin >> T;

    int N;
    for (short i = 1; i <= T; i++)
    {
        cin >> N;
        long long Result = 1;

        for (int j = 2; j <= N; j++)
        {
            Result *= j;
        }
        cout << Result << "\n";
    }
}

void One_Prime()
{
    int N;
    cin >> N;
    bool Result = true;
    for (int i = 2; i < N; i++)
        if (N % i == 0) Result = false;


    if (Result) cout << "YES";
    else cout << "NO";
}

void Palindrome()
{
    int N;
    cin >> N;
    int M = N;
    int Reverced = 0;
    short Temp;
    while (N > 0)
    {
        Temp = N % 10;
        Reverced = Reverced * 10 + Temp;
        N /= 10;
    }
    if (M == Reverced)
    {
        cout << Reverced << "\n";
        cout << "YES";
    }
    else
    {
        cout << Reverced << "\n";
        cout << "NO";
    }
}

void Primes_from_1_to_n()
{
    short T;
    cin >> T;
    for (int i = 2; i <= T; i++)
    {
        bool isPrimes = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) isPrimes = false;
        }
        if (isPrimes)
        {
            cout << i << " ";
        }
    }

}

void Divisors()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0) cout << i << "\n";
    }
}

void GCD()
{
    int A, B;
    cin >> A >> B;
    int Maxa = 0;
    int Maxb = 0;
    for (int i = 1; i <= A; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            if (i > Maxa) Maxa = i;
        }
    }
    for (int i = 1; i <= B; i++)
    {
        if (B % i == 0 && A % i == 0)
        {
            if (i > Maxb) Maxb = i;
        }
    }

    if (Maxa >= Maxb)cout << Maxa;
    else Maxb;
}

void Lucky_Numbers()
{
    int A, B;
    cin >> A >> B;
    bool IsFound = true;
    for (int i = A; i <= B; i++)
    {
        bool check = true;
        int Num = i;
        while (Num > 0)
        {
            short Temp = Num % 10;
            if (Temp != 4 && Temp != 7)
            {
                check = false;
                break;
            }
            Num /= 10;
        }
        if (check)
        {
            cout << i << " ";
            IsFound = false;
        }
    }
    if (IsFound) cout << -1;
}

void Numbers_Histogram()
{
    char S;
    cin >> S;
    short N;
    cin >> N;
    short Temp = N;
    for (int i = 1; i <= Temp; i++)
    {
        cin >> N;
        for (int j = 1; j <= N; j++)
        {
            cout << S;
        }
        if (i != Temp)
            cout << "\n";
    }

}

void Pyramid()
{
    short N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Shape1()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
            cout << " ";

        for (int k = 1; k < (i * 2); k++)
            cout << "*";

        cout << "\n";
    }
}


void Digits()
{
    short T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;
        string Temp = to_string(N);
        for (int j = 0; j < Temp.length(); j++)
        {
            cout << N % 10;
            if (j != Temp.length() - 1)
            {
                cout << " ";
            }
            N /= 10;
        }
        cout << "\n";
    }

}


void  Sequence_of_Numbers_and_Sum()
{

    while (true)
    {
        short N, M;
        cin >> N >> M;

        if (N <= 0 || M <= 0) {
            break;
        }

        short Small = Small_Number(N, M);
        short Big = Big_Number(N, M);

        short Result = 0;
        for (int i = Small; i <= Big; i++) {
            Result += i;
            cout << i << " ";
        }
        cout << "sum =" << Result << "\n";
    }
}

void Sum_of_Consecutive_Odd_Numbers()
{
    short T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        short X, Y;
        cin >> X >> Y;
        short Small = Small_Number(X, Y);
        short Big = Big_Number(X, Y);
        int Sum_Odd = 0;
        for (int i = Small + 1; i < Big; i++)
        {
            if (i % 2 != 0)
                Sum_Odd += i;
        }
        cout << Sum_Odd << "\n";
    }
}

void Shape2()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
            cout << " ";

        for (int k = 1; k < (i * 2); k++)
            cout << "*";

        cout << "\n";
    }
}

void Some_Sums()
{
    short N, A, B;
    cin >> N >> A >> B;

    long long Sum = 0;
    for (short i = A; i <= N; i++)
    {
        if (SumNumber(i) >= A && SumNumber(i) <= B)
            Sum += i;
    }
    cout << Sum;
}

void PUM()
{
    short N;
    cin >> N;
    int Count = 1;
    for (int i = 1; i <= N; i++)
    {
        for (short j = 1; j <= 4; j++)
        {
            if (j != 4) cout << Count << " ";
            else cout << "PUM";
            Count++;
        }
        cout << "\n";
    }
}



void Shape3()
{
    short N;
    cin >> N;
    for (short i = 1; i <= N; i++)
    {
        for (short j = 1; j <= (N - i); j++)
            cout << " ";

        for (short k = 1; k < (2 * i); k++)
            cout << "*";

        cout << "\n";
    }
    for (short i = N; i >= 1; i--)
    {
        for (short j = 1; j <= (N - i); j++)
            cout << " ";

        for (short k = 1; k < (2 * i); k++)
            cout << "*";

        cout << "\n";
    }
}

void Convert_To_Decimal_2()
{
    int T;
    cin >> T;  // عدد حالات الاختبار

    while (T--)
    {
        int N;
        cin >> N;  // الرقم المدخل

        // حساب عدد الـ 1s في التمثيل الثنائي
        int count = 0;
        while (N > 0)
        {
            count += N % 2;  // إذا كان البت الأخير 1 أضفه للعدد
            N /= 2;          // اقسم الرقم على 2 لإزاحة البتات
        }

        // إنشاء الرقم العشري الذي تمثيله الثنائي يحتوي فقط على عدد الـ 1s
        int result = (1 << count) - 1;  // إنشاء رقم يحتوي على count من الـ 1s
        cout << result << "\n";

        
    }

}




void Easy_Fibonacci()
{
    short N;
    cin >> N;
    if (N == 1)
        cout << 0;

    else if (N == 2)
        cout << 0 << " " << 1;
    else
    {
        short Temp = 0;
        short Count = 1;
        cout << 0 << " " << 1 << " ";

        while (N - 2 > 0)
        {
            int Num = Temp + Count;
            cout << Num;
            if (N - 2 != 1)
                cout << ".";

            Temp = Count;
            Count = Num;
            N--;
        }
    }
}

void Three_Numbers()
{
    short S, K;
    cin >> K >> S;
    int Count = 0;

    for (short X = 0; X <= K; X++) {
        for (short Y = 0; Y <= K; Y++) {
            short Z = S - X - Y; // حساب Z مباشرة
            if (Z >= 0 && Z <= K) {
                Count++; // زيادة العداد إذا كانت Z في النطاق
            }
        }
    }

    cout << Count;
}