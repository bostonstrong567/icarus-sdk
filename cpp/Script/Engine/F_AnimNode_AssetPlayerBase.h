// /Script/Engine.AnimNode_AssetPlayerBase
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h

USTRUCT()
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
    UPROPERTY() FName GroupName;  // 0x0010, size 0x8
    UPROPERTY() TEnumAsByte<EAnimGroupRole> GroupRole;  // 0x0018, size 0x1
    UPROPERTY() EAnimSyncGroupScope GroupScope;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnoreForRelevancyTest;  // 0x001A, size 0x1
    UPROPERTY(Transient, BlueprintReadWrite) float BlendWeight;  // 0x001C, size 0x4
    UPROPERTY(Transient, BlueprintReadWrite) float InternalTimeAccumulator;  // 0x0020, size 0x4

    // Not reflected:
    bool bHasBeenFullWeight;  // 0x001B
    FMarkerTickRecord MarkerTickRecord;  // 0x0024
};
