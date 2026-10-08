// /Script/Icarus.ObjectSlot
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/Objects/ObjectInteractables/ObjectSlot.h

UCLASS(Config=Engine)
class AObjectSlot : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EObjectSlotType SlotType;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UHighlightableComponent* HighlightableComponent;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UInteractableComponent* InteractableComponent;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ADeployable* AttachedActor;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AObjectSlot* LinkedSlot;  // 0x02E0, size 0x8
    UPROPERTY(BlueprintAssignable) FLinkEstablished OnLinkEstablished;  // 0x02E8, size 0x1
    UPROPERTY(BlueprintAssignable) FLinkDestroyed OnLinkDestroyed;  // 0x02E9, size 0x1

    UFUNCTION(BlueprintCallable) bool CanLink(AObjectSlot* SlotToConnect);  // parameters 0x9
    UFUNCTION(BlueprintCallable) UInventoryComponent* GetSlotInventory();  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void OnInteraction(AActor* Interactor, FHitResult HitResult);  // parameters 0x90
    UFUNCTION(BlueprintNativeEvent) bool OnServer_Interact(AActor* Interactor, const FHitResult& HitResult);  // parameters 0x91
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_LinkSlots(AObjectSlot* SlotToConnect);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_UnlinkSlots();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool UpdateVisibility();  // parameters 0x1
};
