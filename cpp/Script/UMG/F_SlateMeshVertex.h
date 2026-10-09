// /Script/UMG.SlateMeshVertex
// size 0x3C, declared in Engine/Source/Runtime/UMG/Public/Slate/SlateVectorArtData.h

USTRUCT()
struct FSlateMeshVertex
{
public:
    UPROPERTY() FVector2D Position;  // 0x0000, size 0x8
    UPROPERTY() FColor Color;  // 0x0008, size 0x4
    UPROPERTY() FVector2D UV0;  // 0x000C, size 0x8
    UPROPERTY() FVector2D UV1;  // 0x0014, size 0x8
    UPROPERTY() FVector2D UV2;  // 0x001C, size 0x8
    UPROPERTY() FVector2D UV3;  // 0x0024, size 0x8
    UPROPERTY() FVector2D UV4;  // 0x002C, size 0x8
    UPROPERTY() FVector2D UV5;  // 0x0034, size 0x8
};
