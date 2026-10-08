// /Game/BP/World/BP_OutOfBoundsTeleporter.BP_OutOfBoundsTeleporter_C
// Derives from: AActor > UObject
// size 0x292, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_OutOfBoundsTeleporter_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* TriggerVolume;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* SafePlaceArctc;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* SafePlaceDesert;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* SafePlaceForest;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* CachedIcarusPlayer;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* CachedIcarusItem;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* CachedPrimitiveComponent;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CachedOtherActor;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ZHeightBuffer;  // 0x0270, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug;  // 0x027C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<OverlapSignature> OverlapQueue;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProcessingQueueElement;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QueueSearchFound;  // 0x0291, size 0x1

    UFUNCTION() void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void DebugOOBTeleporter(FVector InLocation);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_OutOfBoundsTeleporter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetClosestPlayer(ABP_IcarusPlayerCharacterSurvival_C*& ClosestCharacter);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RepositionFallingItem_Landscape(AIcarusItem* Item, bool& Success, FVector& Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void RepositionFallingItem_Player(bool& Success, FVector& Location);  // parameters 0x10
};
