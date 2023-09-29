/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRNotifications_IVRNotifications_002_CreateNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulUserValue;
    uint32_t type;
    const char *pchText;
    uint32_t style;
    const w_NotificationBitmap_t *pImage;
    uint32_t *pNotificationId;
};
extern void cppIVRNotifications_IVRNotifications_002_CreateNotification( struct cppIVRNotifications_IVRNotifications_002_CreateNotification_params *params );

struct cppIVRNotifications_IVRNotifications_002_RemoveNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t notificationId;
};
extern void cppIVRNotifications_IVRNotifications_002_RemoveNotification( struct cppIVRNotifications_IVRNotifications_002_RemoveNotification_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
