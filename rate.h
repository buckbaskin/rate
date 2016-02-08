#ifndef RATE_H
#define RATE_H

class Rate {
    private:
        float loop_hz;
        long millis_time;
        unsigned long previous_time;
    public:
        Rate(float hz);
        long cycleTime();
        long expectedCycleTime();
        void reset();
        bool sleep();
};

#endif