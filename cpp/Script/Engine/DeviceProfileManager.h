// /Script/Engine.DeviceProfileManager
// Derives from: UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfileManager.h

UCLASS(Transient, Config=DeviceProfiles)
class UDeviceProfileManager : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<UObject*> Profiles;  // 0x0028, size 0x10
private:
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ManagerUpdatedDelegate;  // 0x0038, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ActiveDeviceProfileChangedDelegate;  // 0x0050, not reflected
    UDeviceProfile * ActiveDeviceProfile;  // 0x0068, not reflected
    TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0> > PushedSettings;  // 0x0070, not reflected
    UDeviceProfile * BaseDeviceProfile;  // 0x00C0, not reflected
};
