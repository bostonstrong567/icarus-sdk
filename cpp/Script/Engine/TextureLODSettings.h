// /Script/Engine.TextureLODSettings
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureLODSettings.h

UCLASS(Config=DeviceProfiles)
class UTextureLODSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) TArray<FTextureLODGroup> TextureLODGroups;  // 0x0028, size 0x10
};
