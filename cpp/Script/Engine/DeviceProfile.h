// /Script/Engine.DeviceProfile
// Derives from: UTextureLODSettings > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfile.h

UCLASS(Config=DeviceProfiles)
class UDeviceProfile : public UTextureLODSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FString DeviceType;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) FString BaseProfileName;  // 0x0048, size 0x10
    UPROPERTY() UObject* Parent;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, Config) TArray<FString> CVars;  // 0x0088, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bVisible;  // 0x0060
    FString ConfigPlatform;  // 0x0068
    TArray<FString,TSizedDefaultAllocator<32> > FragmentIncludes;  // 0x0078
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> CVarsUpdatedDelegate;  // 0x0098, private
};
