//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _COMMUNITY_HARDWARE_ANALOGSIGNALGENERATOR_H_
#define _COMMUNITY_HARDWARE_ANALOGSIGNALGENERATOR_H_

#include <TinyCLR_Interop.h>
struct Library_Community_Hardware_AnalogSignalGenerator_Community_Hardware_AnalogSignalGenerator
{
    static const int FIELD___signalInfo = 1;
    static const int FIELD___channel = 2;
    static const int FIELD___pin = 3;
    static const int FIELD___rawLevels = 4;
    static const int FIELD___clockDivisor = 5;

    TINYCLR_NATIVE_DECLARE(NativeInitialize___VOID);
    TINYCLR_NATIVE_DECLARE(NativeDispose___VOID);
    TINYCLR_NATIVE_DECLARE(Start___VOID__I4);
    TINYCLR_NATIVE_DECLARE(Start___VOID__mscorlibSystemDateTime__I4);
    TINYCLR_NATIVE_DECLARE(Stop___VOID);
    TINYCLR_NATIVE_DECLARE(GetChannelCount___STATIC__I4);
    TINYCLR_NATIVE_DECLARE(GetPin___STATIC__MicrosoftSPOTHardwareMicrosoftSPOTHardwareCpuPin__MicrosoftSPOTHardwareMicrosoftSPOTHardwareCpuAnalogOutputChannel);
    TINYCLR_NATIVE_DECLARE(GetMinClockDivisor___STATIC__U2);

    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Community_Hardware_AnalogSignalGenerator;

#endif  //_COMMUNITY_HARDWARE_ANALOGSIGNALGENERATOR_H_