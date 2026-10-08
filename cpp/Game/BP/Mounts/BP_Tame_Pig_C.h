// /Game/BP/Mounts/BP_Tame_Pig.BP_Tame_Pig_C
// Derives from: ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF68, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tame_Pig_C : public ABP_Tame_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0F58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidStatsUpdate;  // 0x0F60, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DesiredShelterRadius;  // 0x0F64, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Tame_Pig(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RefreshStats();
    UFUNCTION(BlueprintCallable) void StatsUpdated();
    UFUNCTION(BlueprintCallable) void UpdateYieldRadius();
};
