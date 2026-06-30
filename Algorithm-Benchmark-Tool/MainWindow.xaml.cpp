#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Algorithm_Benchmark_Tool::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }
    void MainWindow::Sidebar_AlgorithmVisibilityChanged(winrt::hstring const& algoTag, bool isVisible)
    {
        auto visibility = isVisible ? Microsoft::UI::Xaml::Visibility::Visible : Microsoft::UI::Xaml::Visibility::Collapsed;
        if (algoTag == L"BubbleSort" && CardBubbleSort())
            CardBubbleSort().Visibility(visibility);
        else if (algoTag == L"InsertionSort" && CardInsertionSort())
            CardInsertionSort().Visibility(visibility);
        else if (algoTag == L"QuickSort" && CardQuickSort())
            CardQuickSort().Visibility(visibility);
        else if (algoTag == L"MergeSort" && CardMergeSort())
            CardMergeSort().Visibility(visibility);
        else if (algoTag == L"ShellSort" && CardShellSort())
            CardShellSort().Visibility(visibility);
        std::vector<Microsoft::UI::Xaml::FrameworkElement> visibleCards;
        if (CardBubbleSort() && CardBubbleSort().Visibility() == Microsoft::UI::Xaml::Visibility::Visible)
            visibleCards.push_back(CardBubbleSort());
        if (CardInsertionSort() && CardInsertionSort().Visibility() == Microsoft::UI::Xaml::Visibility::Visible)
            visibleCards.push_back(CardInsertionSort());
        if (CardQuickSort() && CardQuickSort().Visibility() == Microsoft::UI::Xaml::Visibility::Visible)
            visibleCards.push_back(CardQuickSort());
        if (CardMergeSort() && CardMergeSort().Visibility() == Microsoft::UI::Xaml::Visibility::Visible)
            visibleCards.push_back(CardMergeSort());
        if (CardShellSort() && CardShellSort().Visibility() == Microsoft::UI::Xaml::Visibility::Visible)
            visibleCards.push_back(CardShellSort());

        for (size_t i = 0; i < visibleCards.size(); ++i)
        {
            int row = static_cast<int>(i / 2);
            int col = static_cast<int>(i % 2);
            Microsoft::UI::Xaml::Controls::Grid::SetRow(visibleCards[i], row);
            Microsoft::UI::Xaml::Controls::Grid::SetColumn(visibleCards[i], col);
        }
    }
}

