// /Game/BP/Building/Roads/BP_IcarusSplineMesh.BP_IcarusSplineMesh_C
// Derives from: USplineMeshComponent > UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_IcarusSplineMesh_C : public USplineMeshComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IcarusSplineMesh(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
