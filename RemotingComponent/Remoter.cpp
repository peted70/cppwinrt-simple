#include "pch.h"
#include "Remoter.h"

namespace winrt::RemotingComponent::implementation
{
	int32_t _myProp;

    int32_t Remoter::MyProperty()
    {
		return _myProp;
    }

    void Remoter::MyProperty(int32_t value)
    {
		_myProp = value;
    }
}
