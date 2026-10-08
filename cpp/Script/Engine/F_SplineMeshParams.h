// /Script/Engine.SplineMeshParams
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Components/SplineMeshComponent.h

USTRUCT()
struct FSplineMeshParams
{
    UPROPERTY(EditAnywhere) FVector StartPos;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) FVector StartTangent;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere) FVector2D StartScale;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) float StartRoll;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) FVector2D StartOffset;  // 0x0024, size 0x8
    UPROPERTY(EditAnywhere) FVector EndPos;  // 0x002C, size 0xC
    UPROPERTY(EditAnywhere) FVector2D EndScale;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FVector EndTangent;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere) float EndRoll;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) FVector2D EndOffset;  // 0x0050, size 0x8
};
