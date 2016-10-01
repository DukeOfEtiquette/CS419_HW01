#include <sandbox.h>


sandbox test;
int val = 0;

void setup(){
  Serial.begin(57600);
  sandbox test;
  
  //testing the thermometer
  String part1 = "The thermometer is reading: ";
  String part2 = "That means the sensor is picking up ";
  String part3 = " volts!";
  String part4 = "Which translates to ";
  String part5 = " degrees Celcius,";
  String part6 = "and ";
  String part7 = " degrees Fahrenheit!";
  Serial.println(part1 + test.m_therm.readTemp());
  Serial.println(part2 + test.m_therm.getVoltage() + part3);
  Serial.println(part4 + test.m_therm.getCelsius() + part5);
  Serial.println(part6 + test.m_therm.getFahrenheit() + part7);

  //ColorLED Read/Add
  test.m_led_r.set(0); //Set red to 0
  Serial.println("RedLED should be 0 -> " + test.m_led_r.read());
  test.m_led_r.add(100); //Set red to 100
  Serial.println("RedLED should be 100 -> " + test.m_led_r.read());
  test.m_led_r.add(150); //Set red to 250
  Serial.println("RedLED should be 250 -> " + test.m_led_r.read());
  test.m_led_r.add(99); //Add 99 to 250, should result in 255
  Serial.println("RedLED should be 255 -> " + test.m_led_r.read());

  int state;

  //LED getState
  m_led4.on(); //Turn led on
  state = m_led4.getState();
  Serial.println("The led state of 4 should now be 1 (HIGH/on) -> " + state);
  m_led4.off();
  state = m_led4.getState();  
  Serial.println("The led state of 4 should now be 0 (LOW/off) -> " + state);
}

void loop(){
  //RHEOSTAT:
  //In this test the rheostat controls the motor speed.
  //Serial.println(test.m_rheostat.read());
  test.m_expanPort.setSpeed(test.m_rheostat.read());

  //Digital switch: if the switch is on the thermometer controls
  //the motor, otherwise the light sensor controls the motor.
  if(test.m_dSwitch.getState()){
    //Serial.println(test.m_therm.readTemp());
    test.m_expanPort.setSpeed(test.m_therm.readTemp());
  }else {
    test.m_expanPort.setSpeed(test.m_lightSensor.readSensor());
  }
  
  //PUSHBUTT:
  if(test.m_pushButt.getState() == 1){
    val++;
    if(val > 3){
      val = 0;
    }
  }
  Serial.println(val);
  if(val == 1){
    test.m_led_r.set(255);
    test.m_led_g.set(0);
    test.m_led_b.set(0);
    delay(100);
  }
  else if(val == 2){
    test.m_led_r.set(0);
    test.m_led_g.set(255);
    test.m_led_b.set(0);
    delay(100);
  }
  else if(val == 3){
    test.m_led_r.set(0);
    test.m_led_g.set(0);
    test.m_led_b.set(255);
    delay(100);
  }

  //microphone
  Serial.println(test.m_mic.read());
  if(test.m_mic.read() > 0 && test.m_mic.read() < 200){
    test.m_led4.on();
    test.m_led4.off();
  }else if(test.m_mic.read() > 200 && test.m_mic.read() < 400){
    test.m_led4.on();
    test.m_led5.on();
    test.m_led5.off();
    test.m_led4.off();
  }else if(test.m_mic.read() > 400 && test.m_mic.read() < 600){
    test.m_led4.on();
    test.m_led5.on();
    test.m_led6.on();
    test.m_led6.off();
    test.m_led5.off();
    test.m_led4.off();
  }else if(test.m_mic.read() > 600 && test.m_mic.read() < 800){
    test.m_led4.on();
    test.m_led5.on();
    test.m_led6.on();
    test.m_led7.on();
    test.m_led7.off();
    test.m_led6.off();
    test.m_led5.off();
    test.m_led4.off();
  }else if(test.m_mic.read() > 800 && test.m_mic.read() < 1000){
    test.m_led4.on();
    test.m_led5.on();
    test.m_led6.on();
    test.m_led7.on();
    test.m_led8.on();
    test.m_led8.off();
    test.m_led7.off();
    test.m_led6.off();
    test.m_led5.off();
    test.m_led4.off();
  }else if(test.m_mic.read() > 1000){
    test.m_led13.on();
    test.m_led13.off();
  }

}
