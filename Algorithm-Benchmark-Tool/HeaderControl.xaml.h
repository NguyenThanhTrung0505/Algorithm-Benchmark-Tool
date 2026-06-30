#pragma once

#include "HeaderControl.g.h"

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    struct HeaderControl : HeaderControlT<HeaderControl>
    {
        HeaderControl();
        void btnStart_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void btnPause_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void btnStop_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    private:
        winrt::event<Microsoft::UI::Xaml::RoutedEventHandler> m_startRequestedEvent;
    };
}

namespace winrt::Algorithm_Benchmark_Tool::factory_implementation
{
    struct HeaderControl : HeaderControlT<HeaderControl, implementation::HeaderControl>
    {
    };
}
