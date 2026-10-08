// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_LegendarySniper.BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_LegendarySniper_C
// Derives from: UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C > UBP_ActionableBehaviour_Firearm_AmmoController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE70, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_LegendarySniper_C : public UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0E60, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* ReloadParticle;  // 0x0E68, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_LegendarySniper(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LoadAndPlayReloadAnims();
};
