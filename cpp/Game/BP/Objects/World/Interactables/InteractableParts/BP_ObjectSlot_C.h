// /Game/BP/Objects/World/Interactables/InteractableParts/BP_ObjectSlot.BP_ObjectSlot_C
// Derives from: AObjectSlot > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ObjectSlot_C : public AObjectSlot
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* SplineConnectionPoint;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* TypeIndicator;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_TestSplineConnection_C* ConnectionActor;  // 0x0320, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ObjectSlot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSplineConnectionPoint(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnServer_Interact(AActor* Interactor, const FHitResult& HitResult);  // parameters 0x91
    UFUNCTION(BlueprintCallable) void PostLinkDestroyed();
    UFUNCTION(BlueprintCallable) void PostLinkEstablished();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void SetSlotType(EObjectSlotType Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateVisibility();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
