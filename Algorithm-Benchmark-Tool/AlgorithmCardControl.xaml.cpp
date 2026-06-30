#include "pch.h"
#include "AlgorithmCardControl.xaml.h"
#if __has_include("AlgorithmCardControl.g.cpp")
#include "AlgorithmCardControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    DependencyProperty AlgorithmCardControl::m_algorithmNameProperty =
        DependencyProperty::Register(
            L"AlgorithmName",
            xaml_typename<winrt::hstring>(),
            xaml_typename<Algorithm_Benchmark_Tool::AlgorithmCardControl>(),
            PropertyMetadata{ winrt::box_value(L"") }
        );

    DependencyProperty AlgorithmCardControl::m_complexityProperty =
        DependencyProperty::Register(
            L"Complexity",
            xaml_typename<winrt::hstring>(),
            xaml_typename<Algorithm_Benchmark_Tool::AlgorithmCardControl>(),
            PropertyMetadata{ winrt::box_value(L"") }
        );
    DependencyProperty AlgorithmCardControl::m_BestProperty =
        DependencyProperty::Register(
            L"Best",
            xaml_typename<winrt::hstring>(),
            xaml_typename<Algorithm_Benchmark_Tool::AlgorithmCardControl>(),
            PropertyMetadata{ winrt::box_value(L"") }
        );
    DependencyProperty AlgorithmCardControl::m_AvgProperty =
        DependencyProperty::Register(
            L"Avg",
            xaml_typename<winrt::hstring>(),
            xaml_typename<Algorithm_Benchmark_Tool::AlgorithmCardControl>(),
            PropertyMetadata{ winrt::box_value(L"") }
        );
    DependencyProperty AlgorithmCardControl::m_WorstProperty =
        DependencyProperty::Register(
            L"Worst",
            xaml_typename<winrt::hstring>(),
            xaml_typename<Algorithm_Benchmark_Tool::AlgorithmCardControl>(),
            PropertyMetadata{ winrt::box_value(L"") }
        );
    DependencyProperty AlgorithmCardControl::m_SpaceProperty =
        DependencyProperty::Register(
            L"Space",
            xaml_typename<winrt::hstring>(),
            xaml_typename<Algorithm_Benchmark_Tool::AlgorithmCardControl>(),
            PropertyMetadata{ winrt::box_value(L"") }
        );
    AlgorithmCardControl::AlgorithmCardControl()
    {
        InitializeComponent();
    }

    winrt::hstring AlgorithmCardControl::AlgorithmName()
    {
        return unbox_value<winrt::hstring>(GetValue(m_algorithmNameProperty));
    }
    void AlgorithmCardControl::AlgorithmName(winrt::hstring const& value)
    {
        SetValue(m_algorithmNameProperty, box_value(value));
    }
    DependencyProperty AlgorithmCardControl::AlgorithmNameProperty()
    {
        return m_algorithmNameProperty;
    }

    winrt::hstring AlgorithmCardControl::Complexity()
    {
        return unbox_value<winrt::hstring>(GetValue(m_complexityProperty));
    }
    void AlgorithmCardControl::Complexity(winrt::hstring const& value)
    {
        SetValue(m_complexityProperty, box_value(value));
    }
    DependencyProperty AlgorithmCardControl::ComplexityProperty()
    {
        return m_complexityProperty;
    }

    winrt::hstring AlgorithmCardControl::Best()
    {
        return unbox_value<winrt::hstring>(GetValue(m_BestProperty));
    }
    void AlgorithmCardControl::Best(winrt::hstring const& value)
    {
        SetValue(m_BestProperty, box_value(value));
    }
    DependencyProperty AlgorithmCardControl::BestProperty()
    {
        return m_BestProperty;
    }

    winrt::hstring AlgorithmCardControl::Avg()
    {
        return unbox_value<winrt::hstring>(GetValue(m_AvgProperty));
    }
    void AlgorithmCardControl::Avg(winrt::hstring const& value)
    {
        SetValue(m_AvgProperty, box_value(value));
    }
    DependencyProperty AlgorithmCardControl::AvgProperty()
    {
        return m_AvgProperty;
    }

    winrt::hstring AlgorithmCardControl::Worst()
    {
        return unbox_value<winrt::hstring>(GetValue(m_WorstProperty));
    }
    void AlgorithmCardControl::Worst(winrt::hstring const& value)
    {
        SetValue(m_WorstProperty, box_value(value));
    }
    DependencyProperty AlgorithmCardControl::WorstProperty()
    {
        return m_WorstProperty;
    }

    winrt::hstring AlgorithmCardControl::Space()
    {
        return unbox_value<winrt::hstring>(GetValue(m_SpaceProperty));
    }
    void AlgorithmCardControl::Space(winrt::hstring const& value)
    {
        SetValue(m_SpaceProperty, box_value(value));
    }
    DependencyProperty AlgorithmCardControl::SpaceProperty()
    {
        return m_SpaceProperty;
    }

}
