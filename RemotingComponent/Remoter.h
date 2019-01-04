#pragma once

#include "Remoter.g.h"

namespace winrt::RemotingComponent::implementation
{
    struct Remoter : RemoterT<Remoter>
    {
        Remoter() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::RemotingComponent::factory_implementation
{
    struct Remoter : RemoterT<Remoter, implementation::Remoter>
    {
    };
}
