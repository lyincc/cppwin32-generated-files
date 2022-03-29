// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Direct2D_2_H
#define WIN32_Windows_Win32_Direct2D_2_H
#include "win32/impl/Windows.Win32.Direct2D.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_D2D1CreateFactory(win32::Windows::Win32::Direct2D::D2D1_FACTORY_TYPE factoryType, ::win32::guid* riid, win32::Windows::Win32::Direct2D::D2D1_FACTORY_OPTIONS* pFactoryOptions, void** ppIFactory) noexcept;
    void __stdcall WIN32_IMPL_D2D1MakeRotateMatrix(float angle, win32::Windows::Win32::Direct2D::D2D_POINT_2F center, win32::Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    void __stdcall WIN32_IMPL_D2D1MakeSkewMatrix(float angleX, float angleY, win32::Windows::Win32::Direct2D::D2D_POINT_2F center, win32::Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_D2D1IsMatrixInvertible(win32::Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_D2D1InvertMatrix(win32::Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    int32_t __stdcall WIN32_IMPL_D2D1CreateDevice(win32::Windows::Win32::Dxgi::IDXGIDevice* dxgiDevice, win32::Windows::Win32::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, win32::Windows::Win32::Direct2D::ID2D1Device** d2dDevice) noexcept;
    int32_t __stdcall WIN32_IMPL_D2D1CreateDeviceContext(win32::Windows::Win32::Dxgi::IDXGISurface* dxgiSurface, win32::Windows::Win32::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, win32::Windows::Win32::Direct2D::ID2D1DeviceContext** d2dDeviceContext) noexcept;
    win32::Windows::Win32::Dxgi::DXGI_RGBA __stdcall WIN32_IMPL_D2D1ConvertColorSpace(win32::Windows::Win32::Direct2D::D2D1_COLOR_SPACE sourceColorSpace, win32::Windows::Win32::Direct2D::D2D1_COLOR_SPACE destinationColorSpace, win32::Windows::Win32::Dxgi::DXGI_RGBA* color) noexcept;
    void __stdcall WIN32_IMPL_D2D1SinCos(float angle, float* s, float* c) noexcept;
    float __stdcall WIN32_IMPL_D2D1Tan(float angle) noexcept;
    float __stdcall WIN32_IMPL_D2D1Vec3Length(float x, float y, float z) noexcept;
    float __stdcall WIN32_IMPL_D2D1ComputeMaximumScaleFactor(win32::Windows::Win32::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    void __stdcall WIN32_IMPL_D2D1GetGradientMeshInteriorPointsFromCoonsPatch(win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint0, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint1, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint2, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint3, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint4, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint5, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint6, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint7, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint8, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint9, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint10, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pPoint11, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint11, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint12, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint21, win32::Windows::Win32::Direct2D::D2D_POINT_2F* pTensorPoint22) noexcept;
    win32::Windows::Win32::Direct2D::IDirect3D9* __stdcall WIN32_IMPL_Direct3DCreate9(uint32_t SDKVersion) noexcept;
    int32_t __stdcall WIN32_IMPL_Direct3DCreate9Ex(uint32_t SDKVersion, win32::Windows::Win32::Direct2D::IDirect3D9Ex** param1) noexcept;
}
WIN32_IMPL_LINK(D2D1CreateFactory, 16)
WIN32_IMPL_LINK(D2D1MakeRotateMatrix, 12)
WIN32_IMPL_LINK(D2D1MakeSkewMatrix, 16)
WIN32_IMPL_LINK(D2D1IsMatrixInvertible, 4)
WIN32_IMPL_LINK(D2D1InvertMatrix, 4)
WIN32_IMPL_LINK(D2D1CreateDevice, 12)
WIN32_IMPL_LINK(D2D1CreateDeviceContext, 12)
WIN32_IMPL_LINK(D2D1ConvertColorSpace, 12)
WIN32_IMPL_LINK(D2D1SinCos, 12)
WIN32_IMPL_LINK(D2D1Tan, 4)
WIN32_IMPL_LINK(D2D1Vec3Length, 12)
WIN32_IMPL_LINK(D2D1ComputeMaximumScaleFactor, 4)
WIN32_IMPL_LINK(D2D1GetGradientMeshInteriorPointsFromCoonsPatch, 64)
WIN32_IMPL_LINK(Direct3DCreate9, 4)
WIN32_IMPL_LINK(Direct3DCreate9Ex, 8)

#pragma endregion abi_methods

#endif