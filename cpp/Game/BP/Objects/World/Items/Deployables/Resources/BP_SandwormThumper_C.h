// /Game/BP/Objects/World/Items/Deployables/Resources/BP_SandwormThumper.BP_SandwormThumper_C
// Derives from: ABP_Thumper_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x841, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SandwormThumper_C : public ABP_Thumper_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0838, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsQuestActive;  // 0x0840, size 0x1

    UFUNCTION(BlueprintCallable) void CompleteThumperEvent();
    UFUNCTION() void ExecuteUbergraph_BP_SandwormThumper(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetNewAIToSpawn(FVector AtLocation, FAISetupEnum& AI_ToSpawn, FEpicCreaturesRowHandle& EpicCreature, FTransform& SpawnTransform);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void GetTooltipClassOverride(TSoftClassPtr<UHuntingWidget>& ClassOverride);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTotalEventTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnThumperStateUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetupSpawnerDifficulty();
};
