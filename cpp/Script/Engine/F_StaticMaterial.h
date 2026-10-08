// /Script/Engine.StaticMaterial
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h

USTRUCT()
struct FStaticMaterial
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MaterialInterface;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MaterialSlotName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FName ImportedMaterialSlotName;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMeshUVChannelInfo UVChannelData;  // 0x0018, size 0x14
};
