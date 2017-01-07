// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct KeyboardView;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class KeyboardView :1375
// {
uType* KeyboardView_typeof();
void KeyboardView__ctor__fn(KeyboardView* __this);
void KeyboardView__Create_fn(uObject** __retval);
void KeyboardView__get_Handle_fn(KeyboardView* __this, uObject** __retval);
void KeyboardView__New1_fn(KeyboardView** __retval);

struct KeyboardView : uObject
{
    uStrong<uObject*> _handle;

    void ctor_();
    uObject* Handle();
    static uObject* Create();
    static KeyboardView* New1();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
