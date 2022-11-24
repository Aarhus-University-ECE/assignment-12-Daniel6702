#ifndef FIB_H
#define FIB_H

class Duration {
    public:
        
        int getDuration();
        Duration();
        Duration(int t);
        bool tick();
        bool tick(int dt);
        void setAlarm(int t);
        bool checkAndUpdateAlarm();
    private:
        int time;
        int alarm;
        bool alarmHasBeenSet;

};

#endif // FIB_H