// /Script/Foliage.FoliageType_InstancedStaticMesh
// Derives from: UFoliageType > UObject
// size 0x3D0, declared in Engine/Source/Runtime/Foliage/Public/FoliageType_InstancedStaticMesh.h

UCLASS(EditInlineNew, MinimalAPI)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
    UPROPERTY(EditAnywhere) UStaticMesh* Mesh;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> OverrideMaterials;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere) TSubclassOf<UFoliageInstancedStaticMeshComponent> ComponentClass;  // 0x03C8, size 0x8
};
