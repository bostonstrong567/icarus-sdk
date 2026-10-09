// /Script/EditableMesh.SubdivisionLimitSection
// size 0x10, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FSubdivisionLimitSection
{
public:
    UPROPERTY(BlueprintReadWrite) TArray<FSubdividedQuad> SubdividedQuads;  // 0x0000, size 0x10
};
