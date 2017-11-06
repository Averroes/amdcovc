#ifndef CATALYSTCRIMSONPARAMETERS_H
#define CATALYSTCRIMSONPARAMETERS_H

#include "parameters.h"

class CatalystCrimsonProcessing
{

private:

    void checkAdapterList(bool useAdaptersList, std::vector<int> chosenAdapters, std::vector<int> activeAdapters);

public:
    
    void Process(ATIADLHandle Handle_, bool UseAdaptersList, std::vector<int> ChosenAdapters, std::vector<OVCParameter> OvcParameters,
                 bool ChooseAllAdapters, bool PrintVerbose);

};

#endif /* CATALYSTCRIMSONPARAMETERS_H */
