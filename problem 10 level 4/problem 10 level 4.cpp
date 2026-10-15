#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{

    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);

}

short NumberOfDaysInMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;


    int NumberOfDays[12] = { 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];

}

short NumberOfDaysFromTheBeginingOfTheYear(short Day , short Month , short Year)
{
    short TotalDays = 0;

    for (int i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInMonth(i, Year);
    }

    TotalDays += Day;

    return TotalDays;
}

short ReadDay()
{
    short Day;
    cout << "\n Please Enter a Day ?";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "\n Please Enter a Month ?";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\n Please Enter a Year ?";
    cin >> Year;
    return Year;
}

int main()
{
    short Day = ReadDay();
    short Month = ReadMonth();
    short Year = ReadYear();

    cout << "\n Number Of Days From The Begining Of The Year is " << NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);

	return 0;
}

