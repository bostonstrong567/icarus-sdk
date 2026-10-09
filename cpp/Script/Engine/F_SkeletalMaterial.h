// /Script/Engine.SkeletalMaterial
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FSkeletalMaterial
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MaterialInterface;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MaterialSlotName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMeshUVChannelInfo UVChannelData;  // 0x0010, size 0x14
};
