// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class BusyTask :101
// {
uType* BusyTask_typeof();
void BusyTask__ctor__fn(BusyTask* __this, ::g::Fuse::Node* n, int* type, int* act);
void BusyTask__done_fn(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args);
void BusyTask__Done_fn(BusyTask* __this);
void BusyTask__New1_fn(::g::Fuse::Node* n, int* type, int* act, BusyTask** __retval);
void BusyTask__OnBusyChanged_fn(::g::Fuse::Node* n);
void BusyTask__OnRooted_fn(BusyTask* __this);
void BusyTask__OnUnrooted_fn(BusyTask* __this);
void BusyTask__SetActivity_fn(BusyTask* __this, int* act);
void BusyTask__SetBusy_fn(::g::Fuse::Node* n, BusyTask** bt, int* act);

struct BusyTask : uObject
{
    int _activity;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return BusyTask_typeof()->Init(), _listeners_; }
    uStrong< ::g::Fuse::Node*> _node;
    static uSStrong< ::g::Uno::Collections::List*> _tasks_;
    static uSStrong< ::g::Uno::Collections::List*>& _tasks() { return BusyTask_typeof()->Init(), _tasks_; }
    int _type;

    void ctor_(::g::Fuse::Node* n, int type, int act);
    void Done();
    void OnRooted();
    void OnUnrooted();
    void SetActivity(int act);
    static void done(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args);
    static BusyTask* New1(::g::Fuse::Node* n, int type, int act);
    static void OnBusyChanged(::g::Fuse::Node* n);
    static void SetBusy(::g::Fuse::Node* n, BusyTask** bt, int act);
};
// }

}}} // ::g::Fuse::Triggers