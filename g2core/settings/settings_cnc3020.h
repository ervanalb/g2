// ***> NOTE: The init message must be a single line with no CRs or LFs
#define INIT_MESSAGE "Initializing configs to CNC3020 settings"

#define JUNCTION_INTEGRATION_TIME   1.50    // cornering - usually between 0.5 and 2.0 (higher is faster)
#define CHORDAL_TOLERANCE           0.01    // chordal accuracy for arc drawing (in mm)

#define SOFT_LIMIT_ENABLE           0                       // 0=off, 1=on
#define HARD_LIMIT_ENABLE           0                       // 0=off, 1=on
#define SAFETY_INTERLOCK_ENABLE     0                       // 0=off, 1=on

#define SPINDLE_ENABLE_POLARITY     1                       // 0=active low, 1=active high
#define SPINDLE_DIR_POLARITY        0                       // 0=clockwise is low, 1=clockwise is high
#define SPINDLE_PAUSE_ON_HOLD       false
#define SPINDLE_DWELL_TIME          1.0

#define COOLANT_MIST_POLARITY       1                       // 0=active low, 1=active high
#define COOLANT_FLOOD_POLARITY      1                       // 0=active low, 1=active high
#define COOLANT_PAUSE_ON_HOLD       false

// Communications and reporting settings

#define COMM_MODE                   JSON_MODE               // one of: TEXT_MODE, JSON_MODE
#define XIO_ENABLE_FLOW_CONTROL FLOW_CONTROL_RTS            // FLOW_CONTROL_OFF, FLOW_CONTROL_RTS

#define TEXT_VERBOSITY              TV_VERBOSE              // one of: TV_SILENT, TV_VERBOSE
#define JSON_VERBOSITY              JV_MESSAGES             // one of: JV_SILENT, JV_FOOTER, JV_CONFIGS, JV_MESSAGES, JV_LINENUM, JV_VERBOSE
#define QUEUE_REPORT_VERBOSITY      QR_OFF                  // one of: QR_OFF, QR_SINGLE, QR_TRIPLE

#define STATUS_REPORT_VERBOSITY     SR_FILTERED             // one of: SR_OFF, SR_FILTERED, SR_VERBOSE
#define STATUS_REPORT_MIN_MS        100                     // milliseconds - enforces a viable minimum
#define STATUS_REPORT_INTERVAL_MS   250                     // milliseconds - set $SV=0 to disable

//#define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","posa","bcr","feed","vel","unit","coor","dist","admo","frmo","momo","stat"
#define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","bcr","feed","vel","unit","coor","dist","admo","frmo","momo","stat"

// Alternate SRs
//#define STATUS_REPORT_DEFAULTS "line","vel","mpox","mpoy","mpoz","mpoa","coor","ofsa","ofsx","ofsy","ofsz","dist","unit","stat","homz","homy","homx","momo"
//#define STATUS_REPORT_DEFAULTS "_ts1","_cs1","_es1","_xs1","_fe1","line","posx","posy","posz","vel","stat"
//#define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","vel","_cs1","_es1","_xs1","_fe1","_cs2","_es2","_xs2","_fe2"
//#define STATUS_REPORT_DEFAULTS "mpox","mpoy","mpoz","mpoa","ofsx","ofsy","ofsz","ofsa","unit","stat","coor","momo","dist","home","hold","macs","cycs","mots","plan","feed"
//#define STATUS_REPORT_DEFAULTS "line","mpox","mpoy","mpoz","mpoa","ofsx","ofsy","ofsz","ofsa","stat","_cs1","_es1","_fe0","_fe1","_fe2","_fe3"
//#define STATUS_REPORT_DEFAULTS "line","mpox","mpoy","mpoz","stat","_ts2","_ps2","_cs2","_es2","_fe2"
//#define STATUS_REPORT_DEFAULTS "line","mpox","mpoy","mpoz","_cs3","_es3","_fe3","_xs3","_cs2","_es2","_fe2","_xs2","stat"
//#define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","posa","feed","vel","unit","coor","dist","frmo","momo","stat","_cs1","_es1","_xs1","_fe1"

// Gcode startup defaults
#define GCODE_DEFAULT_UNITS         MILLIMETERS             // MILLIMETERS or INCHES
#define GCODE_DEFAULT_PLANE         CANON_PLANE_XY          // CANON_PLANE_XY, CANON_PLANE_XZ, or CANON_PLANE_YZ
#define GCODE_DEFAULT_COORD_SYSTEM  G54                     // G54, G55, G56, G57, G58 or G59
#define GCODE_DEFAULT_PATH_CONTROL  PATH_CONTINUOUS
#define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_DISTANCE_MODE

//*****************************************************************************
//*** Motor Settings **********************************************************
//*****************************************************************************

#define MOTOR_POWER_MODE            MOTOR_POWERED_IN_CYCLE  // default motor power mode (see cmMotorPowerMode in stepper.h)
#define MOTOR_POWER_TIMEOUT         2.00                    // motor power timeout in seconds

#define M1_MOTOR_MAP                AXIS_X_EXTERNAL         // {1ma
#define M1_STEP_ANGLE               1.8                     // {1sa: 1.8 degrees per step
#define M1_TRAVEL_PER_REV           2                       // {1tr: 2 mm
#define M1_MICROSTEPS               8                       // {1mi: 8 microsteps/step
#define M1_POLARITY                 0                       // {1po: 0 (normal/clockwise)
#define M1_POWER_MODE               MOTOR_POWER_MODE        // {1pm
#define M1_POWER_LEVEL              1.0                     // {1pl: 1.0 (full power)

#define M2_MOTOR_MAP                AXIS_Y_EXTERNAL         // {1ma
#define M2_STEP_ANGLE               1.8                     // {1sa: 1.8 degrees per step
#define M2_TRAVEL_PER_REV           2                       // {1tr: 2 mm
#define M2_MICROSTEPS               8                       // {1mi: 8 microsteps/step
#define M2_POLARITY                 0                       // {1po: 0 (normal/clockwise)
#define M2_POWER_MODE               MOTOR_POWER_MODE        // {1pm
#define M2_POWER_LEVEL              1.0                     // {1pl: 1.0 (full power)

#define M3_MOTOR_MAP                AXIS_Z_EXTERNAL         // {1ma
#define M3_STEP_ANGLE               1.8                     // {1sa: 1.8 degrees per step
#define M3_TRAVEL_PER_REV           2                       // {1tr: 2 mm
#define M3_MICROSTEPS               8                       // {1mi: 8 microsteps/step
#define M3_POLARITY                 0                       // {1po: 0 (normal/clockwise)
#define M3_POWER_MODE               MOTOR_POWER_MODE        // {1pm
#define M3_POWER_LEVEL              1.0                     // {1pl: 1.0 (full power)

#define M4_MOTOR_MAP                AXIS_A_EXTERNAL
#define M5_MOTOR_MAP                AXIS_B_EXTERNAL
#define M6_MOTOR_MAP                AXIS_C_EXTERNAL

//*****************************************************************************
//*** Axis Settings ***********************************************************
//*****************************************************************************

#define X_AXIS_MODE                 AXIS_STANDARD           // {aam:  see canonical_machine.h cmAxisMode for valid values
#define X_RADIUS                    38.1                    // {ara:  not really used, radius in mm in radius mode
#define X_VELOCITY_MAX              1000.0                  // {avm:  G0 max velocity in deg/min
#define X_FEEDRATE_MAX              1000.0                  // {afr:  G1 max feed rate in deg/min
#define X_TRAVEL_MIN                0.0                     // {atn:  minimum travel for soft limits
#define X_TRAVEL_MAX                800.0                   // {atm:  travel between switches or crashes
#define X_JERK_MAX                  200.0                   // {ajm:  not super sure what this should be
#define X_JERK_HIGH_SPEED           200.0                   // {ajh:  not super sure what this should be
#define X_HOMING_INPUT              0                       // {ahi:  input used for homing or 0 to disable (TODO: make it work)
#define X_HOMING_DIRECTION          0                       // {ahd:  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           1000.0                  // {asv:  minus means move to minimum switch
#define X_LATCH_VELOCITY            100.0                   // {alv:  deg/min?
#define X_LATCH_BACKOFF             4.0                     // {alb:  ??
#define X_ZERO_BACKOFF              2.0                     // {azb:  ??

#define Y_AXIS_MODE                 AXIS_STANDARD           // {aam:  see canonical_machine.h cmAxisMode for valid values
#define Y_RADIUS                    38.1                    // {ara:  not really used, radius in mm in radius mode
#define Y_VELOCITY_MAX              1000.0                  // {avm:  G0 max velocity in deg/min
#define Y_FEEDRATE_MAX              1000.0                  // {afr:  G1 max feed rate in deg/min
#define Y_TRAVEL_MIN                0.0                     // {atn:  minimum travel for soft limits
#define Y_TRAVEL_MAX                800.0                   // {atm:  travel between switches or crashes
#define Y_JERK_MAX                  200.0                   // {ajm:  not super sure what this should be
#define Y_JERK_HIGH_SPEED           200.0                   // {ajh:  not super sure what this should be
#define Y_HOMING_INPUT              0                       // {ahi:  input used for homing or 0 to disable (TODO: make it work)
#define Y_HOMING_DIRECTION          0                       // {ahd:  0=search moves negative, 1= search moves positive
#define Y_SEARCH_VELOCITY           1000.0                  // {asv:  minus means move to minimum switch
#define Y_LATCH_VELOCITY            100.0                   // {alv:  deg/min?
#define Y_LATCH_BACKOFF             4.0                     // {alb:  ??
#define Y_ZERO_BACKOFF              2.0                     // {azb:  ??

#define Z_AXIS_MODE                 AXIS_STANDARD           // {aam:  see canonical_machine.h cmAxisMode for valid values
#define Z_RADIUS                    38.1                    // {ara:  not really used, radius in mm in radius mode
#define Z_VELOCITY_MAX              1000.0                  // {avm:  G0 max velocity in deg/min
#define Z_FEEDRATE_MAX              1000.0                  // {afr:  G1 max feed rate in deg/min
#define Z_TRAVEL_MIN                0.0                     // {atn:  minimum travel for soft limits
#define Z_TRAVEL_MAX                800.0                   // {atm:  travel between switches or crashes
#define Z_JERK_MAX                  200.0                   // {ajm:  not super sure what this should be
#define Z_JERK_HIGH_SPEED           200.0                   // {ajh:  not super sure what this should be
#define Z_HOMING_INPUT              0                       // {ahi:  input used for homing or 0 to disable (DISABLED for plywood edition: set to 3 to re-enable)
#define Z_HOMING_DIRECTION          0                       // {ahd:  0=search moves negative, 1= search moves positive
#define Z_SEARCH_VELOCITY           1000.0                  // {asv:  minus means move to minimum switch
#define Z_LATCH_VELOCITY            100.0                   // {alv:  deg/min?
#define Z_LATCH_BACKOFF             4.0                     // {alb:  ??
#define Z_ZERO_BACKOFF              2.0                     // {azb:  ??

#define A_AXIS_MODE                 AXIS_DISABLED
#define B_AXIS_MODE                 AXIS_DISABLED
#define C_AXIS_MODE                 AXIS_DISABLED

//*****************************************************************************
//*** GPIO Input / Output Settings ********************************************
//*****************************************************************************

// DIGITAL INPUTS
// Set to allow the board to function if not otherwise set up
// (least disruptive settings)

/* Legend:
    IO_MODE_DISABLED
    IO_ACTIVE_LOW    aka NORMALLY_OPEN
    IO_ACTIVE_HIGH   aka NORMALLY_CLOSED

    INPUT_ACTION_NONE
    INPUT_ACTION_STOP
    INPUT_ACTION_FAST_STOP
    INPUT_ACTION_HALT
    INPUT_ACTION_RESET

    INPUT_FUNCTION_NONE
    INPUT_FUNCTION_LIMIT
    INPUT_FUNCTION_INTERLOCK
    INPUT_FUNCTION_SHUTDOWN
    INPUT_FUNCTION_PANIC
*/

// Xmin
#define DI1_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI1_ACTION                  INPUT_ACTION_NONE
#define DI1_FUNCTION                INPUT_FUNCTION_LIMIT

// Xmax
#define DI2_MODE                    IO_MODE_DISABLED
#define DI2_ACTION                  INPUT_ACTION_NONE
#define DI2_FUNCTION                INPUT_FUNCTION_NONE

// Ymin
#define DI3_MODE                    IO_ACTIVE_LOW
#define DI3_ACTION                  INPUT_ACTION_NONE
#define DI3_FUNCTION                INPUT_FUNCTION_LIMIT

// Ymax
#define DI4_MODE                    IO_MODE_DISABLED
#define DI4_ACTION                  INPUT_ACTION_NONE
#define DI4_FUNCTION                INPUT_FUNCTION_NONE

// Zmin
#define DI5_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI5_ACTION                  INPUT_ACTION_NONE
#define DI5_FUNCTION                INPUT_FUNCTION_LIMIT

// Zmax
#define DI6_MODE                    IO_MODE_DISABLED
#define DI6_ACTION                  INPUT_ACTION_STOP
#define DI6_FUNCTION                INPUT_FUNCTION_NONE

// Shutdown (Amin on v9 board)
#define DI7_MODE                    IO_MODE_DISABLED
#define DI7_ACTION                  INPUT_ACTION_NONE
#define DI7_FUNCTION                INPUT_FUNCTION_NONE

// High Voltage Z Probe In (Amax on v9 board)
#define DI8_MODE                    IO_MODE_DISABLED
#define DI8_ACTION                  INPUT_ACTION_NONE
#define DI8_FUNCTION                INPUT_FUNCTION_NONE

// Hardware interlock input
#define DI9_MODE                    IO_MODE_DISABLED
#define DI9_ACTION                  INPUT_ACTION_NONE
#define DI9_FUNCTION                INPUT_FUNCTION_NONE

//Extruder1_PWM
#define DO1_MODE                    IO_ACTIVE_HIGH

//Extruder2_PWM
#define DO2_MODE                    IO_ACTIVE_HIGH

//Fan1A_PWM
#define DO3_MODE                    IO_ACTIVE_HIGH

//Fan1B_PWM
#define DO4_MODE                    IO_ACTIVE_HIGH

#define DO5_MODE                    IO_ACTIVE_HIGH
#define DO6_MODE                    IO_ACTIVE_HIGH
#define DO7_MODE                    IO_ACTIVE_HIGH
#define DO8_MODE                    IO_ACTIVE_HIGH

//SAFEin (Output) signal
#define DO9_MODE                    IO_ACTIVE_HIGH

#define DO10_MODE                   IO_ACTIVE_HIGH

//Header Bed FET
#define DO11_MODE                   IO_ACTIVE_HIGH

//Indicator_LED
#define DO12_MODE                   IO_ACTIVE_HIGH

#define DO13_MODE                   IO_ACTIVE_HIGH

// *** DEFAULT COORDINATE SYSTEM OFFSETS ***

#define G54_X_OFFSET 0            // G54 is traditionally set to all zeros
#define G54_Y_OFFSET 0
#define G54_Z_OFFSET 0
#define G54_A_OFFSET 0
#define G54_B_OFFSET 0
#define G54_C_OFFSET 0

#define G55_X_OFFSET (X_TRAVEL_MAX/2)    // set to middle of table
#define G55_Y_OFFSET (Y_TRAVEL_MAX/2)
#define G55_Z_OFFSET 0
#define G55_A_OFFSET 0
#define G55_B_OFFSET 0
#define G55_C_OFFSET 0

#define G56_X_OFFSET 0
#define G56_Y_OFFSET 0
#define G56_Z_OFFSET 0
#define G56_A_OFFSET 0
#define G56_B_OFFSET 0
#define G56_C_OFFSET 0

#define G57_X_OFFSET 0
#define G57_Y_OFFSET 0
#define G57_Z_OFFSET 0
#define G57_A_OFFSET 0
#define G57_B_OFFSET 0
#define G57_C_OFFSET 0

#define G58_X_OFFSET 0
#define G58_Y_OFFSET 0
#define G58_Z_OFFSET 0
#define G58_A_OFFSET 0
#define G58_B_OFFSET 0
#define G58_C_OFFSET 0

#define G59_X_OFFSET 0
#define G59_Y_OFFSET 0
#define G59_Z_OFFSET 0
#define G59_A_OFFSET 0
#define G59_B_OFFSET 0
#define G59_C_OFFSET 0
