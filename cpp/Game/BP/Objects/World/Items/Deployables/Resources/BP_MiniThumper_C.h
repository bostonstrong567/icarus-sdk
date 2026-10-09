// /Game/BP/Objects/World/Items/Deployables/Resources/BP_MiniThumper.BP_MiniThumper_C
// Derives from: ABP_Thumper_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x834, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MiniThumper_C : public ABP_Thumper_C
{
public:
    UFUNCTION(BlueprintCallable) void CompleteThumperEvent();
    UFUNCTION(BlueprintCallable) void GetTooltipClassOverride(TSoftClassPtr<UHuntingWidget>& ClassOverride);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTotalEventTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnThumperStateUpdated();
    UFUNCTION(BlueprintCallable) void SetupSpawnerDifficulty();
};
