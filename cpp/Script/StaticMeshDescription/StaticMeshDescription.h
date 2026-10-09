// /Script/StaticMeshDescription.StaticMeshDescription
// Derives from: UMeshDescriptionBase > UObject
// size 0x390, declared in Engine/Source/Runtime/StaticMeshDescription/Public/StaticMeshDescription.h

UCLASS()
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:
    UFUNCTION(BlueprintCallable) void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32 UVIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, const FName& SlotName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32 UVIndex);  // parameters 0x10
};
