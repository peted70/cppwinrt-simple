﻿#include "pch.h"
#include "MainPage.h"
#include <memory>

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::RemotingComponentHost::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
		_remoter.MyProperty(14);

        myButton().Content(box_value(L"Clicked"));
    }
}
