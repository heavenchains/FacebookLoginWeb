// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct FrustumMatrix;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class FrustumMatrix :956
// {
uClassType* FrustumMatrix_typeof();
void FrustumMatrix__OrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__OrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval);

struct FrustumMatrix : uObject
{
    static ::g::Uno::Float4x4 OrthoLH(float width, float height, float near, float far);
    static ::g::Uno::Float4x4 OrthoLHInverse(float width, float height, float near, float far);
    static ::g::Uno::Float4x4 OrthoRH(float width, float height, float zNear, float zFar);
    static ::g::Uno::Float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar);
};
// }

}}} // ::g::Fuse::Internal
