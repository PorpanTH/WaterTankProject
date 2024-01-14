****Arduino Multi-Tank Water Level Monitoring System****
This project provides a comprehensive solution for monitoring the water levels in up to five different tanks using Arduino. It leverages a master-slave architecture with I2C communication, where the master Arduino collects data from five slave Arduinos, each connected to a set of float switches in individual tanks. The master Arduino then displays this information on an LCD screen.

Features

Monitors water levels in up to five separate tanks.
Uses float switches (three per tank) for accurate water level detection.
I2C communication for efficient data transfer between master and slave devices.
Real-time display of water levels on a 16x2 LCD screen.
Hardware Requirements

1 Master Arduino board.
5 Slave Arduino boards (one for each tank).
1 LCD display (16x2).
15 Float switches (3 per tank).
Pull-up resistors for I2C communication.
Jumper wires and breadboards for connections.
System Setup and Configuration

Master Arduino: Connects to the LCD (digital pins 8, 9, 4, 5, 6, 7) and communicates with slave Arduinos using A4 (SDA) and A5 (SCL) for I2C communication.
Slave Arduino(s): Each slave Arduino is connected to three float switches (digital pins 10, 11, and 12) for monitoring water levels. Utilize A4 (SDA) and A5 (SCL) for I2C communication with the master Arduino.
Ensure a common ground across all Arduino boards.
Power the system using a stable 5V supply.
Software Installation

Clone or download this repository.
Open the Master.ino sketch for the master Arduino in the Arduino IDE.
Open the Slave.ino sketch for each of the slave Arduinos in the Arduino IDE.
Adjust configurations if necessary, according to your setup.
Upload Master.ino to the master Arduino and Slave.ino to each slave Arduino.
Usage

Once set up and powered, the system automatically reads the water levels from each tank and displays the results on the LCD screen attached to the master Arduino. The system refreshes these readings periodically to provide real-time monitoring.

Contributing

Your contributions are welcome! Please fork this repository, make your changes, and submit a pull request for review.

License

This project is released under the MIT License.





<!---
PorpanTH/PorpanTH is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
