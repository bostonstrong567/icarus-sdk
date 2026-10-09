// /Script/Icarus.FlammableAudioData
// size 0x8, declared in Icarus/Source/Icarus/DataStructs/Audio/FlammableAudioData.h

USTRUCT()
struct FFlammableAudioData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Weighting;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EFlammableAudioLocationType LocationType;  // 0x0004, size 0x1
};
