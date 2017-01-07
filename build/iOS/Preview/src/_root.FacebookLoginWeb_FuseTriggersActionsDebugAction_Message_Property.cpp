// This file was generated based on /Users/mostafa/Desktop/FacebookLoginWeb/build/iOS/Preview/cache/ux11/FacebookLoginWeb.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property :28
// {
static void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::Actions::DebugAction_typeof(), offsetof(::g::FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property", options);
    type->fp_build_ = FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) :31
void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__ctor_2_fn(FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :33
void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__Get_fn(FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property* __this, uString** __retval)
{
    uStackFrame __("FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Message(), void();
}

// public FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property New(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) :31
void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__New1_fn(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name, FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property** __retval)
{
    *__retval = FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :32
void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__get_Object_fn(FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :34
void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__Set_fn(FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Message(v);
}

// public override sealed bool get_SupportsOriginSetter() :35
void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property__get_SupportsOriginSetter_fn(FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) [instance] :31
void FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property::ctor_2(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property New(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) [static] :31
FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property* FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property::New1(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name)
{
    FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property* obj1 = (FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property*)uNew(FacebookLoginWeb_FuseTriggersActionsDebugAction_Message_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
