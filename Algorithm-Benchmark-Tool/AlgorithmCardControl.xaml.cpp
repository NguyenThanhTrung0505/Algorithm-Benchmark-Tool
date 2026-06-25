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
    int32_t AlgorithmCardControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void AlgorithmCardControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
