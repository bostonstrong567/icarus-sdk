// /Game/BP/Behaviours/Interactable/BP_Interactable_RadialMenu_Deployable.BP_Interactable_RadialMenu_Deployable_C
// Derives from: UBP_Interactable_RadialMenu_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x131, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_RadialMenu_Deployable_C : public UBP_Interactable_RadialMenu_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DeployableBase_C* Deployable;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EHandedness Handedness;  // 0x0130, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_RadialMenu_Deployable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayPickupFX(AIcarusPlayerCharacter* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void MenuItemSelected(FName ItemActionId, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void PickupDeployable();
    UFUNCTION(BlueprintCallable) void PickupItem();
    UFUNCTION(BlueprintCallable) void RadialMenuClosed(TEnumAsByte<ERadialOptions> Option, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
