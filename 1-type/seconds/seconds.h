int get_years(int seconds) {
    seconds=seconds/32140800;
    return seconds+1970; 
}

int get_month(int seconds) {
    seconds=(seconds/86400)%372;
    seconds=seconds/31;
    return seconds;
}

int get_day(int seconds) {
    seconds=(seconds/86400)%31;
    return seconds; 
}

int get_hours(int seconds) {
    seconds=(seconds/3600)%24;
    return seconds;
}

int get_minutes(int seconds) {
    seconds=(seconds/60)%60;
    return seconds; 
}

int get_seconds(int seconds) {
    seconds=seconds%60;
    return seconds; 
}


int get_magical_value(int seconds) {
    int year = get_years(seconds);///
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    int otv;
    otv = ((year+month)/(1+day+second))*((year+month)/(1+day+second)) + ((minutes+(minutes/(1+hours)))/(1+hours));
    return otv;
}