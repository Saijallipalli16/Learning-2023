#include <stdio.h>

// Structure to represent time period
typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimePeriod;

// Function to calculate the difference between two time periods
TimePeriod calculateTimeDifference(TimePeriod start, TimePeriod end) {
    TimePeriod diff;
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int differenceInSeconds = endTimeInSeconds - startTimeInSeconds;

    diff.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;

    diff.minutes = differenceInSeconds / 60;
    differenceInSeconds %= 60;

    diff.seconds = differenceInSeconds;

    return diff;
}

int main() {
    TimePeriod startTime, endTime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = calculateTimeDifference(startTime, endTime);

    printf("\nDifference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

