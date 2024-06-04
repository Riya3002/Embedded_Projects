#include <Wire.h>
#include <MPU6050_tockn.h>

MPU6050 mpu6050(Wire);

const float ACCELEROMETER_SENSITIVITY = 16384.0; // Sensitivity for ±2g range
const float GYROSCOPE_SENSITIVITY = 131.0; // Sensitivity for 250 degrees/s range

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin(); // Initialize MPU6050
  mpu6050.calcGyroOffsets(true);
  delay(1000); // Delay to stabilize sensor
}

void loop() {
  mpu6050.update();
  // Read accelerometer data
  Serial.print("temp"); 
  Serial.println(mpu6050.getTemp());
  Serial.print("accX : ") ; 
  Serial.println( mpu6050.getAccX());
  Serial.print("accY : ") ; 
  Serial.println( mpu6050.getAccY());
  Serial.print("accZ : ") ; 
  Serial.println( mpu6050.getAccZ());
  Serial.print("gyroX : ") ; 
  Serial.println( mpu6050.getGyroX());
  Serial.print("gyroY : ") ; 
  Serial.println( mpu6050.getGyroY());
  Serial.print("gyroZ : ") ; 
  Serial.println( mpu6050.getGyroY());
  Serial.print("accAngleX : ") ; 
  Serial.println( mpu6050.getAccAngleX());
  Serial.print("accAngleY : ") ; 
  Serial.println( mpu6050.getAccAngleY());
  Serial.print("gyroAngleX : ") ; 
  Serial.println( mpu6050.getGyroAngleX());
  Serial.print("gyroAngleY : ") ; 
  Serial.println( mpu6050.getGyroAngleY());
  Serial.print("gyroAngleZ : ") ; 
  Serial.println( mpu6050.getGyroAngleZ());
  Serial.print("AngleX : ") ; 
  Serial.println( mpu6050.getAngleX());
  Serial.print("AngleY : ") ; 
  Serial.println( mpu6050.getAngleY());
  Serial.print("AngleZ : ") ; 
  Serial.println( mpu6050.getAngleZ());
}