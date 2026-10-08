// /Script/Engine.DeviceProfileFragment
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfileFragment.h

UCLASS(Config=DeviceProfiles)
class UDeviceProfileFragment : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FString,TSizedDefaultAllocator<32> > CVars;  // 0x0028
};
