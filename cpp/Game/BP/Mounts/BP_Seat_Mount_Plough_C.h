// /Game/BP/Mounts/BP_Seat_Mount_Plough.BP_Seat_Mount_Plough_C
// Derives from: ABP_Seat_Mount_C > ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x638, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seat_Mount_Plough_C : public ABP_Seat_Mount_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PloughLoc3;  // 0x0610, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PloughLoc2;  // 0x0618, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PloughLoc1;  // 0x0620, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USceneComponent*> PloughLocations;  // 0x0628, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanActivateCart(bool& CanActivate);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Seat_Mount_Plough(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FItemData GetPloughBladeItem(bool& FoundItem) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAnySeeds() const;  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitialiseWithSaddleData(FSaddlesRowHandle SaddleData);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_OnPloughBladeDestroyed();
    UFUNCTION(BlueprintCallable) void OnSaddleAttachmentRemoved(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void PloughGround();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorBeginOverlap(AActor* OtherActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
