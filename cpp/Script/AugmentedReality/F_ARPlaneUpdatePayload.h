// /Script/AugmentedReality.ARPlaneUpdatePayload
// size 0x80, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARPlaneUpdatePayload
{
public:
    UPROPERTY(BlueprintReadOnly) FARSessionPayload SessionPayload;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) FTransform WorldTransform;  // 0x0020, size 0x30
    UPROPERTY(BlueprintReadWrite) FVector Center;  // 0x0050, size 0xC
    UPROPERTY(BlueprintReadWrite) FVector Extents;  // 0x005C, size 0xC
    UPROPERTY(BlueprintReadWrite) TArray<FVector> BoundaryVertices;  // 0x0068, size 0x10
    UPROPERTY(BlueprintReadOnly) EARObjectClassification ObjectClassification;  // 0x0078, size 0x1
};
