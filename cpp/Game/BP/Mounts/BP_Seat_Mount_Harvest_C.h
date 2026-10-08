// /Game/BP/Mounts/BP_Seat_Mount_Harvest.BP_Seat_Mount_Harvest_C
// Derives from: ABP_Seat_Mount_C > ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x618, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seat_Mount_Harvest_C : public ABP_Seat_Mount_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* WaterRadius;  // 0x0610, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanActivateCart(bool& CanActivate);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Seat_Mount_Harvest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FItemData GetAttachmentItem(bool& FoundItem);  // parameters 0x1F1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitialiseWithSaddleData(FSaddlesRowHandle SaddleData);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_OnAttachmentDestroyed();
    UFUNCTION(BlueprintCallable) void OnInventoryItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorBeginOverlap(AActor* OtherActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
