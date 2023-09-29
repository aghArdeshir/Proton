/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_018.h"
struct u_IVROverlay_IVROverlay_018
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1016 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_018_FindOverlay( struct cppIVROverlay_IVROverlay_018_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_CreateOverlay( struct cppIVROverlay_IVROverlay_018_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_DestroyOverlay( struct cppIVROverlay_IVROverlay_018_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_018_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_018_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_018_GetOverlayKey( struct cppIVROverlay_IVROverlay_018_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_018_GetOverlayName( struct cppIVROverlay_IVROverlay_018_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_018_SetOverlayName( struct cppIVROverlay_IVROverlay_018_SetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
}

void cppIVROverlay_IVROverlay_018_GetOverlayImageData( struct cppIVROverlay_IVROverlay_018_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_SetOverlayFlag( struct cppIVROverlay_IVROverlay_018_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_018_GetOverlayFlag( struct cppIVROverlay_IVROverlay_018_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_018_SetOverlayColor( struct cppIVROverlay_IVROverlay_018_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_018_GetOverlayColor( struct cppIVROverlay_IVROverlay_018_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_018_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_018_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_018_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_018_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_018_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_018_SetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_018_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_018_GetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_018_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_018_GetOverlayRenderModel_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderModel( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pColor, params->pError );
}

void cppIVROverlay_IVROverlay_018_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_018_SetOverlayRenderModel_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderModel( params->ulOverlayHandle, params->pchRenderModel, params->pColor );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_018_ShowOverlay( struct cppIVROverlay_IVROverlay_018_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_HideOverlay( struct cppIVROverlay_IVROverlay_018_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_IsOverlayVisible( struct cppIVROverlay_IVROverlay_018_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_018_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_018_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    u_VREvent_t_1016 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_018_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_018_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_018_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_018_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_018_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_018_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_018_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_018_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_018_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_018_SetOverlayNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->vCenter, params->fRadius );
}

void cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->pfRadius );
}

void cppIVROverlay_IVROverlay_018_SetOverlayTexture( struct cppIVROverlay_IVROverlay_018_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_018_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_018_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_SetOverlayRaw( struct cppIVROverlay_IVROverlay_018_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_018_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_018_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTexture( struct cppIVROverlay_IVROverlay_018_GetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
}

void cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_018_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureSize_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_018_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_018_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_018_IsDashboardVisible( struct cppIVROverlay_IVROverlay_018_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_018_ShowDashboard( struct cppIVROverlay_IVROverlay_018_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_018_ShowKeyboard( struct cppIVROverlay_IVROverlay_018_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_018_GetKeyboardText( struct cppIVROverlay_IVROverlay_018_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_018_HideKeyboard( struct cppIVROverlay_IVROverlay_018_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

void cppIVROverlay_IVROverlay_018_GetOverlayFlags( struct cppIVROverlay_IVROverlay_018_GetOverlayFlags_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
}

void cppIVROverlay_IVROverlay_018_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_018_ShowMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
}

void cppIVROverlay_IVROverlay_018_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_018_CloseMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    iface->CloseMessageOverlay(  );
}

