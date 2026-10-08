// /Game/BP/AI/Basic/Mounts/BTTask_Mount_ConsumeFoliage.BTTask_Mount_ConsumeFoliage_C
// Derives from: UBTTask_PerformAction_Mount_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x260, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_Mount_ConsumeFoliage_C : public UBTTask_PerformAction_Mount_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetTileKey;  // 0x01D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetInstanceKey;  // 0x01F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetRecordKey;  // 0x0220, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* Tile;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODInstanceIndex;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODRecordIndex;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USurvivalCharacterState* SurvivalStateRef;  // 0x0258, size 0x8

    UFUNCTION(BlueprintCallable) void DoAction();
};
