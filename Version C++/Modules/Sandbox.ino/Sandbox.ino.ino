//#include <esp_deep_sleep.h>


#define LED_PIN 2

void setup() {

  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  delay(200);
  digitalWrite(LED_PIN, !digitalRead(LED_PIN));


}

void loop() {
  
  esp_deep_sleep(10e6); //10s
 
}