// /Script/Engine.AnimNode_AssetPlayerBase
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h

USTRUCT()
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FName GroupName;  // 0x0010, size 0x8
    UPROPERTY() TEnumAsByte<EAnimGroupRole> GroupRole;  // 0x0018, size 0x1
    UPROPERTY() EAnimSyncGroupScope GroupScope;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnoreForRelevancyTest;  // 0x001A, size 0x1
protected:
    bool bHasBeenFullWeight;  // 0x001B, not reflected
    UPROPERTY(Transient, BlueprintReadWrite) float BlendWeight;  // 0x001C, size 0x4
    UPROPERTY(Transient, BlueprintReadWrite) float InternalTimeAccumulator;  // 0x0020, size 0x4
    FMarkerTickRecord MarkerTickRecord;  // 0x0024, not reflected
};
