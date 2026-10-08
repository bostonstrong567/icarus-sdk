// /Script/Icarus.ModifierStateData
// size 0x268, declared in Icarus/Source/Icarus/Modifiers/ModifierStateData.h

USTRUCT()
struct FModifierStateData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* ModifierIcon;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EModifierType Type;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ModifierName;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ModifierDescription;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool VisibleToPlayer;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<USceneComponent> CosmeticAttachComponent;  // 0x0060, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStateAudioDataRowHandle AudioData;  // 0x0088, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> GrantedStats;  // 0x00A0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> ModifierEffectivenessAffectors;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAura;  // 0x0100, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AuraRange;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAuraFlags AuraFlags;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle ModifierGrantedByAura;  // 0x010C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEscalates;  // 0x0124, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAfflictionChanceRowHandle Escalation;  // 0x0128, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EscalationTime;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRemovedOnEscalation;  // 0x0144, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UModifierStateComponent> Behaviour;  // 0x0148, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FRandomRangeValue> ModifierVariables;  // 0x0170, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldTick;  // 0x01C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TickOnApply;  // 0x01C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModifierTickRate;  // 0x01C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> ModifierLifetimeAffectors;  // 0x01C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RemovedOnDeath;  // 0x01D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EModifierMergeType MergeType;  // 0x01D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxStackNum;  // 0x01DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer ModifierTags;  // 0x01E0, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery ModifierAllowedQuery;  // 0x0200, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle EffectsCustomActor;  // 0x0248, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEffectsObjects;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEffectsNPCs;  // 0x0261, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEffectsPlayers;  // 0x0262, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SaveToDatabase;  // 0x0263, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RemovedOnClick;  // 0x0264, size 0x1
};
