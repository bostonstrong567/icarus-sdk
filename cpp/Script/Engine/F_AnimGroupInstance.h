// /Script/Engine.AnimGroupInstance
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FAnimGroupInstance
{

    // Not reflected:
    TArray<FAnimTickRecord,TSizedDefaultAllocator<32> > ActivePlayers;  // 0x0000
    int32 GroupLeaderIndex;  // 0x0010
    TArray<FName,TSizedDefaultAllocator<32> > ValidMarkers;  // 0x0018
    bool bCanUseMarkerSync;  // 0x0028
    float MontageLeaderWeight;  // 0x002C
    FMarkerTickContext MarkerTickContext;  // 0x0030
};
