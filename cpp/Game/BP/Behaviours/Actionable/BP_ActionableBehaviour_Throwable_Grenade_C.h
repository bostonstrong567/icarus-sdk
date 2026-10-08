// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C
// Derives from: UBP_ActionableBehaviour_Throwable_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x471, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Throwable_Grenade_C : public UBP_ActionableBehaviour_Throwable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPinPulled;  // 0x0470, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanThrow(bool& CanThrow);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsCharging(bool& Charging);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void RequestThrow();
};
