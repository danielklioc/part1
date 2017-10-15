String incomingByte;   // for incoming serial data

void setup() {
        Serial.begin(250000);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.readString();

                // say what you got:
                //Serial.print("I received: ");
                //Serial.println(incomingByte);
                int firstVal, secondVal;

                for (int i = 0; i < incomingByte.length(); i++) {
                  if (incomingByte.substring(i, i+1) == ".") {
                    firstVal = incomingByte.substring(0, i).toInt();
                    secondVal = incomingByte.substring(i+1).toInt();
                    break;
                  } 
                }
                Serial.println("Temperature:");
                Serial.println(firstVal);
                Serial.println("Humidity:");
                Serial.println(secondVal);
                
        }
}
