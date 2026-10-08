// /Game/BP/Behaviours/Actionable/BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C
// Derives from: UBP_ActionableBehaviour_Generic_Melee_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3E8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_Melee_ExtinguishFire_C : public UBP_ActionableBehaviour_Generic_Melee_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Extinguish;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExtinguishChance;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString HitAnimNotifyName;  // 0x03D8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Actionable_Melee_ExtinguishFire(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ExtinguishEffects(FVector HitLocation);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnActionHit(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void ProcessDurability(int32 DuribilityLoss);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Try_Extinguish(FVector SpherePos, AActor* InvokingActor, int32& ExtinguishCount);  // parameters 0x1C, named "Try Extinguish"
};
