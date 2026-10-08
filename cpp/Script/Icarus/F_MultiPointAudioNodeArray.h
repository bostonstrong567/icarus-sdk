// /Script/Icarus.MultiPointAudioNodeArray
// size 0x88, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioNodeArray.h

USTRUCT()
struct FMultiPointAudioNodeArray
{
    UPROPERTY() TArray<FMultiPointAudioNode> Nodes;  // 0x0010, size 0x10
    UPROPERTY() TArray<FMultiPointAudioNode> PendingNodes;  // 0x0020, size 0x10

    // Not reflected:
    FVector2D DistanceRange;  // 0x0000
    bool bNodesAreStatic;  // 0x0008
    int32 CurrentNodeIndex;  // 0x0030
    FVector ListenerLocation;  // 0x0034
    FMultiPointAudioCalcResult Result;  // 0x0040
};
