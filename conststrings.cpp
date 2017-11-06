#include "conststrings.h"

const char* ConstStrings::HelpAndUsage =
    "amdcovc " AMDCOVC_VERSION " by Mateusz Szpakowski (matszpk@interia.pl)\n"
    "This program is distributed under terms of the GPLv2.\n"
    "and is available at https://github.com/matszpk/amdcovc.\n"
    "\n"
    "Usage: amdcovc [--help|-?] [--verbose|-v] [-a LIST|--adapters=LIST] [PARAM ...]\n"
    "Prints AMD Overdrive information if no parameters are given.\n"
    "Sets AMD Overdrive parameters (clocks, fanspeeds,...) if any parameters are given.\n"
    "\n"
    "List of options:\n"
    "  -a, --adapters=LIST       print informations only for these adapters\n"
    "  -v, --verbose             print verbose informations\n"
    "      --version             print version\n"
    "  -?, --help                print help\n"
    "\n"
    "List of parameters:\n"
    "  coreclk[:[ADAPTERS][:LEVEL]]=CLOCK    set core clock in MHz\n"
    "  memclk[:[ADAPTERS][:LEVEL]]=CLOCK     set memory clock in MHz\n"
    "  coreod[:[ADAPTERS][:LEVEL]]=PERCENT   set core Overdrive in percent (AMDGPU)\n"
    "  memod[:[ADAPTERS][:LEVEL]]=PERCENT    set memory Overdrive in percent (AMDGPU)\n"
    "  vcore[:[ADAPTERS][:LEVEL]]=VOLTAGE    set Vddc voltage in Volts\n"
    "  icoreclk[:ADAPTERS]=CLOCK             set core clock in MHz for idle level\n"
    "  imemclk[:ADAPTERS]=CLOCK              set memory clock in MHz for idle level\n"
    "  ivcore[:ADAPTERS]=VOLTAGE             set Vddc voltage in Volts for idle level\n"
    "  fanspeed[:[ADAPTERS][:THID]]=PERCENT  set fanspeed by percentage\n"
    "\n"
    "Extra specifiers in parameters:\n"
    "  ADAPTERS                  adapter (devices) index list (default is 0)\n"
    "  LEVEL                     performance level (typically 0 or 1, default is last)\n"
    "  THID                      thermal controller index (must be 0)\n"
    "You can use 'default' in place of a value to set default value.\n"
    "For fanspeed the 'default' value forces automatic speed setup.\n"
    "\n"
    "Adapter list specified in the parameters and '--adapter' options are a comma-separated list\n"
    "with ranges 'first-last' or 'all'. e.g. 'all', '0-2', '0,1,3-5'\n"
    "\n"
    "Example usage:\n"
    "\n"
    "amdcovc\n"
    "    print short information about the state of all adapters\n\n"
    "amdcovc -a 1,2,4-6\n"
    "    print short information about adapter 1, 2 and 4 to 6\n\n"
    "amdcovc coreclk:1=900 coreclk=1000\n"
    "    set core clock to 900 for adapter 1, set core clock to 1000 for adapter 0\n\n"
    "amdcovc coreclk:1:0=900 coreclk:0:1=1000\n"
    "    set core clock to 900 for adapter 1 at performance level 0,\n"
    "    set core clock to 1000 for adapter 0 at performance level 1\n\n"
    "amdcovc coreclk:1:0=default coreclk:0:1=default\n"
    "    set core clock to default for adapter 0 and 1\n\n"
    "amdcovc fanspeed=75 fanspeed:2=60 fanspeed:1=default\n"
    "    set fanspeed to 75% for adapter 0 and set fanspeed to 60% for adapter 2\n"
    "    set fanspeed to default for adapter 1\n\n"
    "amdcovc vcore=1.111 vcore::0=0.81\n"
    "    set Vddc voltage to 1.111 V for adapter 0\n"
    "    set Vddc voltage to 0.81 for adapter 0 for performance level 0\n\n";

const char* ConstStrings::OverdriveWarning =
    "WARNING: Before setting any of the AMD Overdrive parameters,\n"
    "please stop any processes doing GPU computations and renderings.\n"
    "Please use this utility carefully, as it can damage your hardware.\n"
    "\n"
    "If the X11 server is not running, this program will require root privileges.\n";

const char* ConstStrings::Version =
    "amdcovc " AMDCOVC_VERSION
    " by Mateusz Szpakowski (matszpk@interia.pl)\n"
    "Program is distributed under terms of the GPLv2.\n"
    "Program available at https://github.com/matszpk/amdcovc.\n";
