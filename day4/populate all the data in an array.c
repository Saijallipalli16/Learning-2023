#include <stdio.h>
#include <string.h>

typedef struct {
    char sensorID[10];
    float temperature;
    int humidity;
    int lightIntensity;
} SensorInfo;

void parseData(const char* data, SensorInfo* info) {
    char temp[10], hum[10], light[10];

    sscanf(data, "S%s-T:%f-H:%d-L:%s", info->sensorID, &(info->temperature), &(info->humidity), light);

    if (strcmp(light, "ON") == 0) {
        info->lightIntensity = 100;
    } else {
        sscanf(light, "%d", &(info->lightIntensity));
    }
}

int main() {
    char data[100];
    SensorInfo info;

    printf("Enter the data transmitted by the data logger: ");
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = '\0'; // Remove trailing newline character from input

    parseData(data, &info);

    printf("\nSensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", info.sensorID);
    printf("Temperature: %.1f C\n", info.temperature);
    printf("Humidity: %d\n", info.humidity);
    printf("Light Intensity: %d%%\n", info.lightIntensity);

    return 0;
}

