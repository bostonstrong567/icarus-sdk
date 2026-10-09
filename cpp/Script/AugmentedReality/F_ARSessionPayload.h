// /Script/AugmentedReality.ARSessionPayload
// size 0x18, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARSessionPayload
{
public:
    UPROPERTY(BlueprintReadOnly) int32 ConfigFlags;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadOnly) UMaterialInterface* DefaultMeshMaterial;  // 0x0008, size 0x8
    UPROPERTY(BlueprintReadOnly) UMaterialInterface* DefaultWireframeMeshMaterial;  // 0x0010, size 0x8
};
