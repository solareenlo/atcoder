#include "bits/stdc++.h"
using namespace std;

string int_to_str(int &num) {
    string tmp;
    if (num < 10 && num >= 0)
        tmp = '0' + to_string(num);
    else
        tmp = to_string(num);
    return tmp;
}

void set_minus_time(int &time1, int &diff, int &time2) {
    if (time1 + diff < 0) {
        time2 -= 1;
        time1 += 60;
        time1 += diff;
    } else {
        time1 += diff;
    }
}

void round_up(int &time1, int &time2) {
    if (time1 >= 60) {
        time1 = time1 % 60;
        time2 += 1;
    }
}

struct Clock {
    int hour, minute, second;

    void set(int h, int m, int s) {
        this->hour = h;
        this->minute = m;
        this->second = s;
    }

    string to_str() {
        string h = int_to_str(this->hour);
        string m = int_to_str(this->minute);
        string s = int_to_str(this->second);
        return h + ':' + m + ':' + s;
    }

    void shift(int diff_second) {
        int diff_h = diff_second / 3600;
        int diff_m = (diff_second % 3600) / 60;
        int diff_s = (diff_second % 3600) % 60;
        set_minus_time(this->second, diff_s, this->minute);
        set_minus_time(this->minute, diff_m, this->hour);
        if (this->hour + diff_h < 0) {
            this->hour += 24;
            this->hour += diff_h;
        } else {
            this->hour += diff_h;
        }
        round_up(this->second, this->minute);
        round_up(this->minute, this->hour);
        if (this->hour == 24) {
            this->hour = 0;
        }
    }
};

int main(void) {
    int hour, minute, second;
    cin >> hour >> minute >> second;
    int diff_second;
    cin >> diff_second;

    Clock clock;
    clock.set(hour, minute, second);
    cout << clock.to_str() << endl;
    clock.shift(diff_second);
    cout << clock.to_str() << endl;
    return 0;
}
