#include "time.h"
#define MINUTE_SECONDS 60
#define HOUR_SECONDS 3600

Time::Time(){}
Time::~Time(){}

Time::Time(int hours, int minutes, int seconds){
    m_hours=hours;
    m_minutes=minutes;
    m_seconds=seconds;
}

Time::Time(const Time &time){
    m_hours=time.m_hours;
    m_minutes=time.m_minutes;
    m_seconds=time.m_seconds;
}

Time& operator=(const Time &time){
    m_hours=time.m_hours;
    m_minutes=time.m_minutes;
    m_seconds=time.m_seconds;
}

double Time::numberOfHours() const{
    return Time::numberOfSeconds()/double(HOUR_SECONDS);
}

double Time::numberOfMinutes() const{
    return Time::numberOfSeconds()/double(MINUTE_SECONDS);
}

int Time::numberOfSeconds() const{
    return m_hours*HOUR_SECONDS+m_minutes*MINUTE_SECONDS+m_seconds;
}

std::string Time::getTimeAsString() const{
    char buf [9];
    snprintf (buf, sizeof buf, "%02d:%02d:%02d",  m_hours, m_minutes, m_seconds);
    return std::string(buf);
}
