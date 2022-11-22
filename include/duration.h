#ifndef FIB_H
#define FIB_H

class Duration {
    public:
        int time;
        int getDuration();
        Duration();
        Duration(int t);
        bool tick();
        bool tick(int dt);
        int alarm;
        bool alarmHasBeenSet;
        void setAlarm(int t);
        bool checkAndUpdateAlarm();
};

#endif // FIB_H