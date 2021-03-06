/*
 * SensorData.h
 *
 *  Created on: Nov 6, 2018
 *      Author: nisarg
 */

#ifndef SENSORDATA_H_
#define SENSORDATA_H_

typedef struct {
	unsigned long timeStamp;
	float accel[3];
	float gyro[3];
	float angle[3];
} IMUData;

typedef struct {
	unsigned long timeStamp;
	double distance;
} UltrasonicData;

typedef struct{
	unsigned long timeStamp;
	double distance;
} TOFData;

#endif /* SENSORDATA_H_ */
