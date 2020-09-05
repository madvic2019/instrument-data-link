#include <stdio.h>

const char* SimVarDefs[][2] = {
    { "Plane Altitude", "feet" },
    { "Kohlsman Setting Hg", "inHg" },
    { "Attitude Indicator Pitch Degrees", "degrees" },
    { "Attitude Indicator Bank Degrees", "degrees" },
    { "Airspeed Indicated", "knots" },
    { "Airspeed Mach", "mach" },
    { "Airspeed True Calibrate", "degrees" },
    { "Heading Indicator", "degrees" },
    { "Vertical Speed", "feet per second" },
    { "Turn Indicator Rate", "radians per second" },
    { "Turn Coordinator Ball", "position" },
    { "Elevator Trim Position", "degrees" },
    { "Flaps Num Handle Positions", "number" },
    { "Flaps Handle Index", "number" },
    { "Zulu Time", "seconds" },
    { "Local Time", "seconds" },
    { "Absolute Time", "seconds" },
    { "Electrical Battery Bus Voltage", "volts" },
    { "Ambient Temperature", "celsius" },
    { "General Eng Rpm:1", "rpm" },
    { "General Eng Elapsed Time:1", "hours" },
    { "Fuel Tank Left Main Level", "percent" },
    { "Fuel Tank Right Main Level", "percent" },
    { "Nav Obs:1", "degrees" },
    { "Nav Radial Error:1", "degrees" },
    { "Nav Glide Slope Error:1", "degrees" },
    { "Nav ToFrom:1", "enum" },
    { "Nav Gs Flag:1", "bool" },
    { "Nav Obs:2", "degrees" },
    { "Nav Radial Error:2", "degrees" },
    { "Nav ToFrom:2", "enum" },
    { "Adf Radial:1", "degrees" },
    { "Adf Card", "degrees" },
    { "Com Active Frequency:1", "frequency" },
    { "Com Standby Frequency:1", "frequency" },
    { "Nav Active Frequency:1", "mhz" },
    { "Nav Standby Frequency:1", "mhz" },
    { "Com Active Frequency:1", "frequency" },
    { "Com Standby Frequency:1", "frequency" },
    { "Nav Active Frequency:2", "mhz" },
    { "Nav Standby Frequency:2", "mhz" },
    { "Adf Active Frequency:1", "frequency" },
    { "Adf Standby Frequency:1", "hz" },
    { NULL, NULL }
};
