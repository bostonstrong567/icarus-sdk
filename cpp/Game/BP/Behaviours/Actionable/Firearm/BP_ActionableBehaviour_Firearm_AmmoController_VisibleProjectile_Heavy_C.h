// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy_C
// Derives from: UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C > UBP_ActionableBehaviour_Firearm_AmmoController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE7C, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy_C : public UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0E70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierUID;  // 0x0E78, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnReloadEnd();
    UFUNCTION(BlueprintCallable) void PlayReload();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
