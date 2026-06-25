#pragma once

#include "AlgorithmCardControl.g.h"

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    struct AlgorithmCardControl : AlgorithmCardControlT<AlgorithmCardControl>
    {
        AlgorithmCardControl()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::Algorithm_Benchmark_Tool::factory_implementation
{
    struct AlgorithmCardControl : AlgorithmCardControlT<AlgorithmCardControl, implementation::AlgorithmCardControl>
    {
    };
}
