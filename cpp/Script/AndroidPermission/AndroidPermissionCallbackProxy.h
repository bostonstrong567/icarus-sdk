// /Script/AndroidPermission.AndroidPermissionCallbackProxy
// Derives from: UObject
// size 0x48, declared in Engine/Plugins/Runtime/AndroidPermission/Source/AndroidPermission/Classes/AndroidPermissionCallbackProxy.h

UCLASS()
class UAndroidPermissionCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FAndroidPermissionDynamicDelegate OnPermissionsGrantedDynamicDelegate;  // 0x0028, size 0x10
    TDelegate<void __cdecl(TArray<FString,TSizedDefaultAllocator<32> > const &,TArray<bool,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> OnPermissionsGrantedDelegate;  // 0x0038, not reflected
};
