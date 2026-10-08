// /Script/HairStrandsCore.GroomPluginSettings
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomPluginSettings.h

UCLASS(Config=Engine)
class UGroomPluginSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) float GroomCacheLookAheadBuffer;  // 0x0028, size 0x4
};
