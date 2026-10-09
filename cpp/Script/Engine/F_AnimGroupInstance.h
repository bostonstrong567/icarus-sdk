// /Script/Engine.AnimGroupInstance
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FAnimGroupInstance
{
public:
    TArray<FAnimTickRecord,TSizedDefaultAllocator<32> > ActivePlayers;  // 0x0000, not reflected
    int32 GroupLeaderIndex;  // 0x0010, not reflected
    TArray<FName,TSizedDefaultAllocator<32> > ValidMarkers;  // 0x0018, not reflected
    bool bCanUseMarkerSync;  // 0x0028, not reflected
    float MontageLeaderWeight;  // 0x002C, not reflected
    FMarkerTickContext MarkerTickContext;  // 0x0030, not reflected
};
