// /Script/ProceduralMeshComponent.ProcMeshTangent
// size 0x10, declared in Engine/Plugins/Runtime/ProceduralMeshComponent/Source/ProceduralMeshComponent/Public/ProceduralMeshComponent.h

USTRUCT()
struct FProcMeshTangent
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TangentX;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFlipTangentY;  // 0x000C, size 0x1
};
