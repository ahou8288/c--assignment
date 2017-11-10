#ifndef TIME_H
#define TIME_H

#include <string>

class Time
{
public:
    Time(int hours, int minutes, int seconds);

    ~Time();

    double numberOfHours() const;
    double numberOfMinutes() const;
    int numberOfSeconds() const;

    std::string getTimeAsString() const;

    Time(const Time &time);
    Time& operator=(const Time &time);

private:
    Time();
    int m_seconds;
    int m_minutes;
    int m_hours;
};

#endif
