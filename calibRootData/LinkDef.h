/** @file LinkDef.h
    @brief for rootcint
 $Header$

*/
#ifdef __CINT__


#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

// Probably have to do something special for namespace qualifier  calibRootData
#pragma link C++ namespace calibRootData;
#pragma link C++ class calibRootData::CalDimension+;
#pragma link C++ class calibRootData::CalGain+;
#pragma link C++ class calibRootData::DacCol+;
#pragma link C++ class calibRootData::CalGainCol+;
#pragma link C++ class calibRootData::CalSerial+;
#endif
