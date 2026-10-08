// /Script/Landscape.LandscapeWeightmapUsage
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeWeightmapUsage.h

UCLASS(MinimalAPI)
class ULandscapeWeightmapUsage : public UObject
{
public:
    UPROPERTY(Instanced) ULandscapeComponent* ChannelUsage;  // 0x0028, size 0x8
    UPROPERTY() FGuid LayerGuid;  // 0x0048, size 0x10
};
