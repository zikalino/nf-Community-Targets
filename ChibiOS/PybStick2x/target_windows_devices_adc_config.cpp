//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//
 
#include <win_dev_adc_native_target.h>


const NF_PAL_ADC_PORT_PIN_CHANNEL AdcPortPinConfig[] = {

    // ADC1
    {1, GPIOA, 2, ADC_CHANNEL_IN2},
    {1, GPIOA, 3, ADC_CHANNEL_IN3},
    {1, GPIOA, 0, ADC_CHANNEL_IN0},
    {1, GPIOA, 4, ADC_CHANNEL_IN4},
    {1, GPIOA, 5, ADC_CHANNEL_IN5},
    {1, GPIOA, 7, ADC_CHANNEL_IN7},

    // these are the internal sources, available only at ADC1
    {1, NULL, 0, ADC_CHANNEL_SENSOR},
    {1, NULL, 0, ADC_CHANNEL_VREFINT},
    {1, NULL, 0, ADC_CHANNEL_VBAT},
};

const int AdcChannelCount = ARRAYSIZE(AdcPortPinConfig);
