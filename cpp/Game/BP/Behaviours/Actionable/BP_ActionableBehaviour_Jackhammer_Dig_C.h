// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Jackhammer_Dig.BP_ActionableBehaviour_Jackhammer_Dig_C
// Derives from: UBP_ActionableBehaviour_Chainsaw_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xA7C, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Jackhammer_Dig_C : public UBP_ActionableBehaviour_Chainsaw_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TICK_RATE;  // 0x0A78, size 0x4

    UFUNCTION(BlueprintCallable) bool CheckEnoughFuel(int32& FuelUsed) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ConditionalRepDotHit(bool GotHit);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Jackhammer_Dig(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void GetStatAdjustedDamageTimerFreq(float& TickTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InvokeHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
