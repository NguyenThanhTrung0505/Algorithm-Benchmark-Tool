#include "pch.h"
#include "HeaderControl.xaml.h"
#if __has_include("HeaderControl.g.cpp")
#include "HeaderControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    HeaderControl::HeaderControl()
    {
        InitializeComponent();
    }
    void HeaderControl::btnStart_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        m_startRequestedEvent(*this, e);
    }
    void HeaderControl::btnPause_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {

    }
    void HeaderControl::btnStop_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {

    }
}
