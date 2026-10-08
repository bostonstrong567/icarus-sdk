// /Script/EditableMesh.SubdividedQuad
// size 0xD0, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FSubdividedQuad
{
    UPROPERTY(BlueprintReadWrite) FSubdividedQuadVertex QuadVertex0;  // 0x0000, size 0x34
    UPROPERTY(BlueprintReadWrite) FSubdividedQuadVertex QuadVertex1;  // 0x0034, size 0x34
    UPROPERTY(BlueprintReadWrite) FSubdividedQuadVertex QuadVertex2;  // 0x0068, size 0x34
    UPROPERTY(BlueprintReadWrite) FSubdividedQuadVertex QuadVertex3;  // 0x009C, size 0x34
};
