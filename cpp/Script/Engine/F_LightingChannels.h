// /Script/Engine.LightingChannels
// size 0x1, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FLightingChannels
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bChannel0 : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bChannel1 : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bChannel2 : 1;  // 0x0000, mask 0x04
};
