// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Direct2D_H
#define WIN32_Windows_Win32_Direct2D_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Direct2D.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::Direct2D
{
#pragma region methods
    inline int32_t D2D1CreateFactory(Windows::Win32::Direct2D::D2D1_FACTORY_TYPE factoryType, ::win32::guid* riid, Windows::Win32::Direct2D::D2D1_FACTORY_OPTIONS* pFactoryOptions, void** ppIFactory)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1CreateFactory(factoryType, riid, pFactoryOptions, ppIFactory);
        return win32_impl_result;
    }
    inline void D2D1MakeRotateMatrix(float angle, Windows::Win32::Direct2D::D2D_POINT_2F center, Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix)
    {
        WIN32_IMPL_D2D1MakeRotateMatrix(angle, center, matrix);
    }
    inline void D2D1MakeSkewMatrix(float angleX, float angleY, Windows::Win32::Direct2D::D2D_POINT_2F center, Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix)
    {
        WIN32_IMPL_D2D1MakeSkewMatrix(angleX, angleY, center, matrix);
    }
    inline Windows::Win32::SystemServices::BOOL D2D1IsMatrixInvertible(Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1IsMatrixInvertible(matrix);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL D2D1InvertMatrix(Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1InvertMatrix(matrix);
        return win32_impl_result;
    }
    inline int32_t D2D1CreateDevice(Windows::Win32::Dxgi::IDXGIDevice* dxgiDevice, Windows::Win32::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, Windows::Win32::Direct2D::ID2D1Device** d2dDevice)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1CreateDevice(dxgiDevice, creationProperties, d2dDevice);
        return win32_impl_result;
    }
    inline int32_t D2D1CreateDeviceContext(Windows::Win32::Dxgi::IDXGISurface* dxgiSurface, Windows::Win32::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, Windows::Win32::Direct2D::ID2D1DeviceContext** d2dDeviceContext)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1CreateDeviceContext(dxgiSurface, creationProperties, d2dDeviceContext);
        return win32_impl_result;
    }
    inline Windows::Win32::Dxgi::DXGI_RGBA D2D1ConvertColorSpace(Windows::Win32::Direct2D::D2D1_COLOR_SPACE sourceColorSpace, Windows::Win32::Direct2D::D2D1_COLOR_SPACE destinationColorSpace, Windows::Win32::Dxgi::DXGI_RGBA* color)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1ConvertColorSpace(sourceColorSpace, destinationColorSpace, color);
        return win32_impl_result;
    }
    inline void D2D1SinCos(float angle, float* s, float* c)
    {
        WIN32_IMPL_D2D1SinCos(angle, s, c);
    }
    inline float D2D1Tan(float angle)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1Tan(angle);
        return win32_impl_result;
    }
    inline float D2D1Vec3Length(float x, float y, float z)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1Vec3Length(x, y, z);
        return win32_impl_result;
    }
    inline float D2D1ComputeMaximumScaleFactor(Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix)
    {
        auto win32_impl_result = WIN32_IMPL_D2D1ComputeMaximumScaleFactor(matrix);
        return win32_impl_result;
    }
    inline void D2D1GetGradientMeshInteriorPointsFromCoonsPatch(Windows::Win32::Direct2D::D2D_POINT_2F* pPoint0, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint1, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint2, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint3, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint4, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint5, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint6, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint7, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint8, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint9, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint10, Windows::Win32::Direct2D::D2D_POINT_2F* pPoint11, Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint11, Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint12, Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint21, Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint22)
    {
        WIN32_IMPL_D2D1GetGradientMeshInteriorPointsFromCoonsPatch(pPoint0, pPoint1, pPoint2, pPoint3, pPoint4, pPoint5, pPoint6, pPoint7, pPoint8, pPoint9, pPoint10, pPoint11, pTensorPoint11, pTensorPoint12, pTensorPoint21, pTensorPoint22);
    }
    inline Windows::Win32::Direct2D::IDirect3D9* Direct3DCreate9(uint32_t SDKVersion)
    {
        auto win32_impl_result = WIN32_IMPL_Direct3DCreate9(SDKVersion);
        return win32_impl_result;
    }
    inline int32_t Direct3DCreate9Ex(uint32_t SDKVersion, Windows::Win32::Direct2D::IDirect3D9Ex** param1)
    {
        auto win32_impl_result = WIN32_IMPL_Direct3DCreate9Ex(SDKVersion, param1);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
