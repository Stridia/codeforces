#include <stdio.h>

double time(int speed, int start, int end) {
    int length = end - start;
    double time = (double) length / speed;
    return (time > 0) ? time : 0;
}

double calculateBus(int startBus, int endBus, int posPer, int vBus, int vPer) {
    // If the person waits
    double time1 = time(vBus, startBus, posPer);    // Bus goes to the person
    time1 = time1 + time(vBus, posPer, endBus);     // Bus goes to its end position

    // If the person walks whilst waiting for the bus
    double time2 = time(vBus - vPer, startBus, posPer);         // Bus goes to the person
    time2 = time2 + time(vBus, posPer + time2 * vPer, endBus);  // Bus goes to its end position

    printf("%lf %lf\n", time1, time2);

}

int main() {
    int road;
    int vBus, vPer;
    int totalBus, totalPer;
    scanf("%d %d %d %d %d", &totalBus, &totalPer, &road, &vBus, &vPer);

    // Position of Bus and Person
    int posBus[totalBus][2];
    int posPer[totalPer];
    
    for (int i = 0; i < totalBus; i++) scanf("%d %d", &posBus[i][0], &posBus[i][1]);
    for (int i = 0; i < totalPer; i++) scanf("%d", &posPer[i]);

    // Time by Walking or by Bus
    double byWalk[totalPer], byBus[totalPer];

    for (int i = 0; i < totalPer; i++) 
        byWalk[i] = time(vPer, posPer[i], road);

    for (int i = 0; i < totalPer; i++) {
    }
    
    return 0;
}