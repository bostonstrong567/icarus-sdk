// /Script/Engine.AnimNotifyEvent
// size 0xB8, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimTypes.h

USTRUCT()
struct FAnimNotifyEvent : public FAnimLinkableElement
{
    UPROPERTY(Deprecated) float DisplayTime;  // 0x0030, size 0x4
    UPROPERTY() float TriggerTimeOffset;  // 0x0034, size 0x4
    UPROPERTY() float EndTriggerTimeOffset;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TriggerWeightThreshold;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName NotifyName;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UAnimNotify* Notify;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UAnimNotifyState* NotifyStateClass;  // 0x0050, size 0x8
    UPROPERTY() float Duration;  // 0x0058, size 0x4
    UPROPERTY() FAnimLinkableElement EndLink;  // 0x0060, size 0x30
    UPROPERTY() bool bConvertedFromBranchingPoint;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMontageNotifyTickType> MontageTickType;  // 0x0091, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NotifyTriggerChance;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENotifyFilterType> NotifyFilterType;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NotifyFilterLOD;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTriggerOnDedicatedServer;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTriggerOnFollower;  // 0x00A1, size 0x1
    UPROPERTY() int32 TrackIndex;  // 0x00A4, size 0x4

    // Not reflected:
    FName CachedNotifyEventName;  // 0x00A8
    FName CachedNotifyEventBaseName;  // 0x00B0
};
