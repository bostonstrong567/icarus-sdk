// /Script/Icarus.MultiPointAudioNode
// size 0x28, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioNode.h

USTRUCT()
struct FMultiPointAudioNode
{
    UPROPERTY() UObject* TargetObject;  // 0x0000, size 0x8

    // Not reflected:
    bool bRemoveOnZeroWeighting;  // 0x0008
    bool bLocationIsSet;  // 0x0009
    float DefaultWeighting;  // 0x000C
    float CurrentWeighting;  // 0x0010
    FVector CurrentLocation;  // 0x0014
    bool bMarkedForRemoval;  // 0x0020
};
