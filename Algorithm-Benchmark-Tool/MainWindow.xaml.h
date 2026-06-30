#pragma once

#include "MainWindow.g.h"

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
        void Sidebar_AlgorithmVisibilityChanged(winrt::hstring const& algoTag, bool isVisible);
    };
}

namespace winrt::Algorithm_Benchmark_Tool::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
