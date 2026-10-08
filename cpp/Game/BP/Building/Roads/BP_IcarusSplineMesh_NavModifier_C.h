// /Game/BP/Building/Roads/BP_IcarusSplineMesh_NavModifier.BP_IcarusSplineMesh_NavModifier_C
// Derives from: UBP_IcarusSplineMesh_C > USplineMeshComponent > UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_IcarusSplineMesh_NavModifier_C : public UBP_IcarusSplineMesh_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IcarusSplineMesh_NavModifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
