#pragma once

#include "AlgorithmCardControl.g.h"

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    struct AlgorithmCardControl : AlgorithmCardControlT<AlgorithmCardControl>
    {
        AlgorithmCardControl();;

        winrt::hstring AlgorithmName();
        void AlgorithmName(winrt::hstring const& value);
        static Microsoft::UI::Xaml::DependencyProperty AlgorithmNameProperty();
        winrt::hstring Complexity();
        void Complexity(winrt::hstring const& value);
        static Microsoft::UI::Xaml::DependencyProperty ComplexityProperty();
        winrt::hstring Best();
        void Best(winrt::hstring const& value);
        static Microsoft::UI::Xaml::DependencyProperty BestProperty();
        winrt::hstring Avg();
        void Avg(winrt::hstring const& value);
        static Microsoft::UI::Xaml::DependencyProperty AvgProperty();
        winrt::hstring Worst();
        void Worst(winrt::hstring const& value);
        static Microsoft::UI::Xaml::DependencyProperty WorstProperty();
        winrt::hstring Space();
        void Space(winrt::hstring const& value);
        static Microsoft::UI::Xaml::DependencyProperty SpaceProperty();
    private:
        static Microsoft::UI::Xaml::DependencyProperty m_algorithmNameProperty;
        static Microsoft::UI::Xaml::DependencyProperty m_complexityProperty;
        static Microsoft::UI::Xaml::DependencyProperty m_BestProperty;
        static Microsoft::UI::Xaml::DependencyProperty m_AvgProperty;
        static Microsoft::UI::Xaml::DependencyProperty m_WorstProperty;
        static Microsoft::UI::Xaml::DependencyProperty m_SpaceProperty;
    };
}

namespace winrt::Algorithm_Benchmark_Tool::factory_implementation
{
    struct AlgorithmCardControl : AlgorithmCardControlT<AlgorithmCardControl, implementation::AlgorithmCardControl>
    {
    };
}
