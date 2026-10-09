// /Script/Icarus.MultiPointAudioNode
// size 0x28, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioNode.h

USTRUCT()
struct FMultiPointAudioNode
{
public:
    UPROPERTY() UObject* TargetObject;  // 0x0000, size 0x8
    bool bRemoveOnZeroWeighting;  // 0x0008, not reflected
    bool bLocationIsSet;  // 0x0009, not reflected
private:
    float DefaultWeighting;  // 0x000C, not reflected
    float CurrentWeighting;  // 0x0010, not reflected
    FVector CurrentLocation;  // 0x0014, not reflected
    bool bMarkedForRemoval;  // 0x0020, not reflected
};
