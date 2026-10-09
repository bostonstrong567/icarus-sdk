// /Script/ProceduralMeshComponent.ProcMeshVertex
// size 0x4C, declared in Engine/Plugins/Runtime/ProceduralMeshComponent/Source/ProceduralMeshComponent/Public/ProceduralMeshComponent.h

USTRUCT()
struct FProcMeshVertex
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Position;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Normal;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcMeshTangent Tangent;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D UV0;  // 0x002C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D UV1;  // 0x0034, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D UV2;  // 0x003C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D UV3;  // 0x0044, size 0x8
};
