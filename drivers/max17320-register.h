#define STATUS              0x00
#define VALRTTH             0x01
#define TALRTTH             0x02
#define SALRTTH             0x03
#define ATRATE              0x04
#define REPCAP              0x05
#define REPSOC              0x06
#define AGE                 0x07
#define MAXMINVOLT          0x08
#define MAXMINTEMP          0x09
#define MAXMINCURR          0x0A
#define CONFIG              0x0B
#define QRESIDUAL           0x0C
#define MIXSOC              0x0D
#define AVSOC               0x0E
#define MISCCFG             0x0F

#define FULLCAPREP          0x10
#define TTE                 0x11
#define QRTABLE00           0x12
#define FULLSOCTHR          0x13
#define RCELL               0x14
// #define RESERVED            0x15
#define AVGTA               0x16
#define CYCLES              0x17
#define DESIGNCAP           0x18
#define AVGVCELL            0x19
#define VCELL               0x1A
#define TEMP                0x1B
#define CURRENT             0x1C
#define AVGCURRENT          0x1D
#define ICHGTERM            0x1E
#define AVCAP               0x1F

#define TTF                 0x20
#define DEVNAME             0x21
#define QRTABLE10           0x22
#define FULLCAPNOM          0x23
// #define RESERVED            0x24
// #define RESERVED            0x25
// #define RESERVED            0x26
// #define RESERVED            0x27
#define CHARGING_CURRENT    0x28
#define FILTERCFG           0x29
#define CHARGING_VOLTAGE    0x2A
#define MIXCAP              0x2B
// #define RESERVED            0x2C
// #define RESERVED            0x2D
// #define RESERVED            0x2E
// #define RESERVED            0x2F

// #define RESERVED            0x30
// #define RESERVED            0x31
#define QRTABLE20           0x32
#define RESERVED            0x33
#define DIETEMP             0x34
#define FULLCAP             0x35
#define IAVGEMPTY           0x36
// #define RESERVED            0x37
// #define RESERVED            0x38
// #define RESERVED            0x39
#define VEMPTY              0x3A
// #define RESERVED            0x3B
// #define RESERVED            0x3C
#define FSTAT               0x3D
#define TIMER               0x3E
// #define RESERVED            0x3F

#define AVGDIETEMP          0x40
// #define RESERVED            0x41
#define QRTABLE30           0x42
// #define RESERVED            0x43
// #define RESERVED            0x44
// #define RESERVED            0x45
// #define RESERVED            0x46
// #define RESERVED            0x47
// #define RESERVED            0x48
// #define RESERVED            0x49
#define VFREMCAP            0x4A
// #define RESERVED            0x4B
// #define RESERVED            0x4C
#define QH                  0x4D
#define QL                  0x4E
// #define RESERVED            0x4F

#define RELAXCFG            0x50
#define LEARNCFG            0x51
// #define RESERVED            0x52
// #define RESERVED            0x53
#define MAXPEAKPOWER        0x54
#define SUSPEAKPOWER        0x55
#define PACKRESISTANCE      0x56
#define SYSRESISTANCE       0x57
#define MINSYSCOLTAGE       0x58
#define MPPCURRENT          0x59
#define SPPCURRENT          0x5A
#define CONFIG2             0x5B
#define IALRTTH             0x5C
#define MINVOLT             0x5D
#define MINCURR             0x5E
#define PROTALRT            0x5F

#define STATUS2             0x60
#define POWER               0x61
#define VRIPPLE             0x62
#define AVGPOWER            0x63
// #define RESERVED            0x64
#define TTFCFG              0x65
#define CVMIXCAP            0x66
#define CVHALFTIME          0x67
#define CGTEMPCO            0x68
#define AGEFORECAST         0x69
// #define RESERVED            0x6A
// #define RESERVED            0x6B
// #define RESERVED            0x6C
// #define RESERVED            0x6D
#define TIMERH              0x6E
// #define RESERVED            0x6F

#define SOCHOLD             0x70
#define AVGCELL4            0x71
#define AVGCELL3            0x72
#define AVGCELL2            0x73
#define AVGCELL1            0x74
#define CELL4               0x75
#define CELL3               0x76
#define CELL2               0x77
#define CELL1               0x78
#define PROTSTATUS          0x79            //The Protection Status register contains the fault states of the protection state machine 
#define BATT                0x7A
#define PCKP                0x7B
#define ATQRESIDUAL         0x7C
#define ATTTE               0x7D
#define ATAVSOC             0x7E
#define ATAVCAP             0x7F