// /Game/BP/Mounts/BP_Tame_Sheep.BP_Tame_Sheep_C
// Derives from: ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF85, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tame_Sheep_C : public ABP_Tame_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0F58, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 WoolGrowthPercent;  // 0x0F60, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle WoolGrowthTimer;  // 0x0F68, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FoodConsumedPerWoolTick;  // 0x0F70, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WaterConsumedPerWoolTick;  // 0x0F74, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 WoolGrowthPerTick;  // 0x0F78, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasWool;  // 0x0F7C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsStatUpdate;  // 0x0F7D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenTicks;  // 0x0F80, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasBeenSpawned;  // 0x0F84, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Tame_Sheep(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_HasWool();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ReplaceSelfWithDeadItem(AIcarusActor*& ReplacementActor, const TArray<FIcarusStatReplicated>& CustomStats);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetWoolGrowthPercent(int32 WoolGrowthPercent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TimerExec();
    UFUNCTION(BlueprintCallable) void TryGrowWool();
    UFUNCTION(BlueprintCallable) void TryShearWool(AIcarusPlayerCharacter* Shearer, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateStatValues();
    UFUNCTION(BlueprintCallable) void UpdateWoolCosmetics();
};
