// /Script/EditableMesh.SubdividedQuadVertex
// size 0x34, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshTypes.h

USTRUCT()
struct FSubdividedQuadVertex
{
public:
    UPROPERTY(BlueprintReadWrite) int32 VertexPositionIndex;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) FVector2D TextureCoordinate0;  // 0x0004, size 0x8
    UPROPERTY(BlueprintReadWrite) FVector2D TextureCoordinate1;  // 0x000C, size 0x8
    UPROPERTY(BlueprintReadWrite) FColor VertexColor;  // 0x0014, size 0x4
    UPROPERTY(BlueprintReadWrite) FVector VertexNormal;  // 0x0018, size 0xC
    UPROPERTY(BlueprintReadWrite) FVector VertexTangent;  // 0x0024, size 0xC
    UPROPERTY(BlueprintReadWrite) float VertexBinormalSign;  // 0x0030, size 0x4
};
