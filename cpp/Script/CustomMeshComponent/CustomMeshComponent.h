// /Script/CustomMeshComponent.CustomMeshComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Plugins/Runtime/CustomMeshComponent/Source/CustomMeshComponent/Classes/CustomMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UCustomMeshComponent : public UMeshComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FCustomMeshTriangle,TSizedDefaultAllocator<32> > CustomMeshTris;  // 0x0478, private

    UFUNCTION(BlueprintCallable) void AddCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ClearCustomMeshTriangles();
    UFUNCTION(BlueprintCallable) bool SetCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);  // parameters 0x11
};
