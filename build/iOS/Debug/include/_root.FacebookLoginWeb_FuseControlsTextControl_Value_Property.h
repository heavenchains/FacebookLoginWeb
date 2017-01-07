// This file was generated based on /Users/mostafa/Desktop/FacebookLoginWeb/.uno/ux11/FacebookLoginWeb.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FacebookLoginWeb_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class FacebookLoginWeb_FuseControlsTextControl_Value_Property :37
// {
::g::Uno::UX::Property1_type* FacebookLoginWeb_FuseControlsTextControl_Value_Property_typeof();
void FacebookLoginWeb_FuseControlsTextControl_Value_Property__ctor_2_fn(FacebookLoginWeb_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void FacebookLoginWeb_FuseControlsTextControl_Value_Property__Get_fn(FacebookLoginWeb_FuseControlsTextControl_Value_Property* __this, uString** __retval);
void FacebookLoginWeb_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FacebookLoginWeb_FuseControlsTextControl_Value_Property** __retval);
void FacebookLoginWeb_FuseControlsTextControl_Value_Property__get_Object_fn(FacebookLoginWeb_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FacebookLoginWeb_FuseControlsTextControl_Value_Property__Set_fn(FacebookLoginWeb_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin);
void FacebookLoginWeb_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FacebookLoginWeb_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct FacebookLoginWeb_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static FacebookLoginWeb_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
