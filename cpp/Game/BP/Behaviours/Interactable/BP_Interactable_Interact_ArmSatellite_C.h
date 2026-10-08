// /Game/BP/Behaviours/Interactable/BP_Interactable_Interact_ArmSatellite.BP_Interactable_Interact_ArmSatellite_C
// Derives from: UBP_Interactable_WorldObject_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x110, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Interact_ArmSatellite_C : public UBP_Interactable_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player_0;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DeployableBase_C* Deployable;  // 0x0108, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Interact_ArmSatellite(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
