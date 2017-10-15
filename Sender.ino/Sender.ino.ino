#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11 

// Instantiates and initializes the dht object
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
        Serial.begin(250000);     // opens serial port, sets data rate to 9600 bps
  // Start the communication with the DHT sensor by callibg the begin method of the dht object
  dht.begin();
  // Manual delay while the communication with the sensor starts
  delay(10);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Read the current temperature and humidity measured by the sensor
  int temp = dht.readTemperature();
  int hum = dht.readHumidity();
  //Serial.print("temperature: ");
  Serial.print(temp);
  Serial.print(" .");
  //Serial.print("humidity: ");
  Serial.println(hum);
  delay(5000);
}
