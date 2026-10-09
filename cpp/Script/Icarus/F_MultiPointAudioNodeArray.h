// /Script/Icarus.MultiPointAudioNodeArray
// size 0x88, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioNodeArray.h

USTRUCT()
struct FMultiPointAudioNodeArray
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    FVector2D DistanceRange;  // 0x0000, not reflected
    bool bNodesAreStatic;  // 0x0008, not reflected
private:
    UPROPERTY() TArray<FMultiPointAudioNode> Nodes;  // 0x0010, size 0x10
    UPROPERTY() TArray<FMultiPointAudioNode> PendingNodes;  // 0x0020, size 0x10
    int32 CurrentNodeIndex;  // 0x0030, not reflected
    FVector ListenerLocation;  // 0x0034, not reflected
    FMultiPointAudioCalcResult Result;  // 0x0040, not reflected
};
