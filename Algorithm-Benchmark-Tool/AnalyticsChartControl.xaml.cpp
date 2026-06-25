#include "pch.h"
#include "AnalyticsChartControl.xaml.h"
#if __has_include("AnalyticsChartControl.g.cpp")
#include "AnalyticsChartControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    int32_t AnalyticsChartControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void AnalyticsChartControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
