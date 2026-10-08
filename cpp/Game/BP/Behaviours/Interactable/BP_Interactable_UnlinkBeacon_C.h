// /Game/BP/Behaviours/Interactable/BP_Interactable_UnlinkBeacon.BP_Interactable_UnlinkBeacon_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_UnlinkBeacon_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_UnlinkBeacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetInstigatorBeaconTool(AActor* Instigator, ABP_SkeletalItem_Beacon_Tool_C*& BeaconTool);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
