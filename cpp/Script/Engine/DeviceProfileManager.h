// /Script/Engine.DeviceProfileManager
// Derives from: UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfileManager.h

UCLASS(Transient, Config=DeviceProfiles)
class UDeviceProfileManager : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<UObject*> Profiles;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ManagerUpdatedDelegate;  // 0x0038, private
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ActiveDeviceProfileChangedDelegate;  // 0x0050, private
    UDeviceProfile * ActiveDeviceProfile;  // 0x0068, private
    TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0> > PushedSettings;  // 0x0070, private
    UDeviceProfile * BaseDeviceProfile;  // 0x00C0, private
};
