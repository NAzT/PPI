const int testPin = 0;

/* Timings in microseconds
    ___                ___
___|   |_____...______|   |_____...
   0  100           2000 2100

*/

void setup()
{
    pinMode(testPin, OUTPUT);
}


void loop()
{
    digitalWrite(testPin, HIGH);
    delayMicroseconds(100);

    digitalWrite(testPin, LOW);
    delayMicroseconds(1900);
}


/* Timings examples in microseconds
    ______              ______                       _                       ___
___|      |____________|      |_________..._________| |_________..._________|
   0      62           400    462                5000 5008                  8333
*/
/*
int posTimings[] = {0,  400, 5000};
int negTimings[] = {62, 462, 5008};
const int loopTime = 8333;

const int timingsNum = sizeof posTimings / sizeof posTimings[0];


void setup()
{
    pinMode(testPin, OUTPUT);
    Serial.begin(115200);
    Serial.println("Starting...");
}


void loop()
{
    int t0 = micros();

    // this redundant positive edge improves the "zero" timing reference
    digitalWrite(testPin, HIGH);

    for (int i = 0; i < timingsNum; i++)
    {
        while (micros() <= posTimings[i] + t0);         // wait for pos edge
        digitalWrite(testPin, HIGH);                    // positive edge

        while (micros() <= negTimings[i] + t0);         // wait for neg edge
        digitalWrite(testPin, LOW);                     // negative edge
    }

    while (micros() < loopTime + t0)                    // wait for next loop
    {
        // allow updating the position of the sweep position
        if (Serial.available()) {
            int tmp = Serial.parseInt();
            if (tmp > 2777 && tmp < 6773)
                posTimings[2] = tmp;
            Serial.println(tmp);

            tmp = Serial.parseInt();
            if (tmp > (posTimings[1] + 4) && tmp < 6778)
                negTimings[2] = tmp;
            Serial.println(tmp);
        }
    }
}
*/
