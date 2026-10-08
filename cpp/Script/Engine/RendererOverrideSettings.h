// /Script/Engine.RendererOverrideSettings
// Derives from: UDeveloperSettings > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/RendererSettings.h

UCLASS(Config=Engine)
class URendererOverrideSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) uint8 bSupportAllShaderPermutations : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bForceRecomputeTangents : 1;  // 0x0038, mask 0x02
};
