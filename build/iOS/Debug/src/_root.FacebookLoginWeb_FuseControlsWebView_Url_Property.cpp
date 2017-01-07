// This file was generated based on /Users/mostafa/Desktop/FacebookLoginWeb/.uno/ux11/FacebookLoginWeb.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FacebookLoginWeb_FuseControlsWebView_Url_Property.h>
#include <Fuse.Controls.WebView.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class FacebookLoginWeb_FuseControlsWebView_Url_Property :10
// {
static void FacebookLoginWeb_FuseControlsWebView_Url_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::FacebookLoginWeb_FuseControlsWebView_Url_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FacebookLoginWeb_FuseControlsWebView_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FacebookLoginWeb_FuseControlsWebView_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FacebookLoginWeb_FuseControlsWebView_Url_Property", options);
    type->fp_build_ = FacebookLoginWeb_FuseControlsWebView_Url_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FacebookLoginWeb_FuseControlsWebView_Url_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FacebookLoginWeb_FuseControlsWebView_Url_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FacebookLoginWeb_FuseControlsWebView_Url_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FacebookLoginWeb_FuseControlsWebView_Url_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FacebookLoginWeb_FuseControlsWebView_Url_Property(Fuse.Controls.WebView obj, Uno.UX.Selector name) :13
void FacebookLoginWeb_FuseControlsWebView_Url_Property__ctor_2_fn(FacebookLoginWeb_FuseControlsWebView_Url_Property* __this, ::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :15
void FacebookLoginWeb_FuseControlsWebView_Url_Property__Get_fn(FacebookLoginWeb_FuseControlsWebView_Url_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Url(), void();
}

// public FacebookLoginWeb_FuseControlsWebView_Url_Property New(Fuse.Controls.WebView obj, Uno.UX.Selector name) :13
void FacebookLoginWeb_FuseControlsWebView_Url_Property__New1_fn(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name, FacebookLoginWeb_FuseControlsWebView_Url_Property** __retval)
{
    *__retval = FacebookLoginWeb_FuseControlsWebView_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void FacebookLoginWeb_FuseControlsWebView_Url_Property__get_Object_fn(FacebookLoginWeb_FuseControlsWebView_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :16
void FacebookLoginWeb_FuseControlsWebView_Url_Property__Set_fn(FacebookLoginWeb_FuseControlsWebView_Url_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetUrl(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :17
void FacebookLoginWeb_FuseControlsWebView_Url_Property__get_SupportsOriginSetter_fn(FacebookLoginWeb_FuseControlsWebView_Url_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FacebookLoginWeb_FuseControlsWebView_Url_Property(Fuse.Controls.WebView obj, Uno.UX.Selector name) [instance] :13
void FacebookLoginWeb_FuseControlsWebView_Url_Property::ctor_2(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FacebookLoginWeb_FuseControlsWebView_Url_Property New(Fuse.Controls.WebView obj, Uno.UX.Selector name) [static] :13
FacebookLoginWeb_FuseControlsWebView_Url_Property* FacebookLoginWeb_FuseControlsWebView_Url_Property::New1(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name)
{
    FacebookLoginWeb_FuseControlsWebView_Url_Property* obj1 = (FacebookLoginWeb_FuseControlsWebView_Url_Property*)uNew(FacebookLoginWeb_FuseControlsWebView_Url_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
