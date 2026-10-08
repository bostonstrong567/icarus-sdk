// /Game/BP/MiscConstructs/BP_Weight.BP_Weight_C
// Derives from: UWeightComponent > UTraitComponent > UActorComponent > UObject
// size 0x149, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Weight_C : public UWeightComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UShapeComponent*, ActorArrayStruct> OnTopOf;  // 0x00F8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpreadWeightToBuildingNeighbors;  // 0x0148, size 0x1

    UFUNCTION(BlueprintCallable) void BoundColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void BoundColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_BP_Weight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetWeight(UShapeComponent* Shape);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Init();
    UFUNCTION(BlueprintCallable) void RemoveWeightFromBuilding(AActor* Building, UShapeComponent* Shape);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SendWeightToBuilding(AActor* Building, UShapeComponent* Shape);  // parameters 0x10
};
