#include "pch.h"
#include "SidebarControl.xaml.h"
#if __has_include("SidebarControl.g.cpp")
#include "SidebarControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    int32_t SidebarControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void SidebarControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
