// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee.BP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee_C
// Derives from: UBP_ActionableBehaviour_Gauntlet_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3E8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee_C : public UBP_ActionableBehaviour_Gauntlet_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle NoFuelTimerHandle;  // 0x03E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void HasFuel(bool& HasFuel);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnActionHit(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void ProcessFuel();
};
