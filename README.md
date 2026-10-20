<h1 align="center">Infrared Sensor Array Testing</h1>
<p align="center"><strong>ROBOTICS | SENSOR INTERFACING</strong></p>
<p align="center"><a href="https://github.com/Kaveesha229">Kaveesha Gunawardena | Engineering portfolio</a></p>

## Overview

An eight channel infrared sensor experiment for preparing a line following robot. The sketch prints raw analogue readings so sensor order, surface contrast and mounting height can be checked before adding control logic.

## Repository guide

<table>
<tr><th>File or folder</th><th>Purpose</th></tr>
<tr><td><a href="sketch_mar26a.ino">sketch_mar26a.ino</a></td><td>Main sensor acquisition sketch</td></tr>
</table>

## Hardware connections

<table>
<tr><th>Sensor</th><th>ESP32 GPIO</th></tr>
<tr><td>IR1</td><td>14</td></tr>
<tr><td>IR2</td><td>27</td></tr>
<tr><td>IR3</td><td>26</td></tr>
<tr><td>IR4</td><td>25</td></tr>
<tr><td>IR5</td><td>33</td></tr>
<tr><td>IR6</td><td>32</td></tr>
<tr><td>IR7</td><td>35</td></tr>
<tr><td>IR8</td><td>34</td></tr>
</table>

## How it works

Each loop reads the eight inputs with `analogRead`, prints them in IR1 to IR8 order and waits 300 milliseconds. The output begins with `IR values:`. This sketch does not classify surfaces or drive motors.

## Getting started

1. Connect analogue sensor outputs to the listed pins and check that signal levels suit the ESP32 inputs.
2. Open `sketch_mar26a.ino`, select the connected ESP32 board and upload.
3. Open Serial Monitor at 115200 baud.
4. Move each channel over light and dark surfaces at a fixed height and record the readings.

## Suggested verification

Confirm channel order and repeatability before choosing thresholds. Surface colour, lighting and sensor distance affect the readings. Numerical calibration results have not yet been documented.

## Project media

Photos and demonstration videos will be added here as the project presentation is updated.

<p align="center"><sub>Practical engineering through building, testing and refinement.</sub></p>
