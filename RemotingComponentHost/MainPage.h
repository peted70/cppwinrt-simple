//
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include <winrt/RemotingComponent.h>

using namespace winrt::RemotingComponent;

namespace winrt::RemotingComponentHost::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

		Remoter _remoter;

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::RemotingComponentHost::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
