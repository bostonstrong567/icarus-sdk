// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo.BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_C
// Derives from: UBP_ActionableBehaviour_Firearm_AmmoController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE78, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_C : public UBP_ActionableBehaviour_Firearm_AmmoController_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle CustomAmmo;  // 0x0E60, size 0x18

    UFUNCTION(BlueprintCallable) void GetCurrentAmmoItem(bool& SlotValid, FItemData& AmmoItemRef);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasAmmo(bool& HasAmmo);  // parameters 0x1
};
