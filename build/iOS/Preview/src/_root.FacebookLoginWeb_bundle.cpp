// This file was generated based on /Users/mostafa/Desktop/FacebookLoginWeb/FacebookLoginWeb.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FacebookLoginWeb_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[4];

namespace g{

// public static generated class FacebookLoginWeb_bundle :0
// {
// static FacebookLoginWeb_bundle() :0
static void FacebookLoginWeb_bundle__cctor__fn(uType* __type)
{
    FacebookLoginWeb_bundle::Auth5cd473b6_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"FacebookLog...*/]))->GetFile(::STRINGS[1/*"auth-2fedd2...*/]);
    FacebookLoginWeb_bundle::FBfLogo__white_512e102617f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"FacebookLog...*/]))->GetFile(::STRINGS[2/*"fb-f-logo__...*/]);
    FacebookLoginWeb_bundle::MainView9b6fb4e0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"FacebookLog...*/]))->GetFile(::STRINGS[3/*"mainview-cb...*/]);
}

static void FacebookLoginWeb_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FacebookLoginWeb");
    ::STRINGS[1] = uString::Const("auth-2fedd267.js");
    ::STRINGS[2] = uString::Const("fb-f-logo__white_51-773bc124.png");
    ::STRINGS[3] = uString::Const("mainview-cb8c4a65.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FacebookLoginWeb_bundle::Auth5cd473b6_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FacebookLoginWeb_bundle::FBfLogo__white_512e102617f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FacebookLoginWeb_bundle::MainView9b6fb4e0_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Auth5cd473b6", 0),
        new uField("FBfLogo__white_512e102617f", 1),
        new uField("MainView9b6fb4e0", 2));
}

uClassType* FacebookLoginWeb_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FacebookLoginWeb_bundle", options);
    type->fp_build_ = FacebookLoginWeb_bundle_build;
    type->fp_cctor_ = FacebookLoginWeb_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FacebookLoginWeb_bundle::Auth5cd473b6_;
uSStrong< ::g::Uno::IO::BundleFile*> FacebookLoginWeb_bundle::FBfLogo__white_512e102617f_;
uSStrong< ::g::Uno::IO::BundleFile*> FacebookLoginWeb_bundle::MainView9b6fb4e0_;
// }

} // ::g
