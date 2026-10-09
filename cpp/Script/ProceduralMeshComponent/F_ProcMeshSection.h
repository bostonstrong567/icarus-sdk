// /Script/ProceduralMeshComponent.ProcMeshSection
// size 0x40, declared in Engine/Plugins/Runtime/ProceduralMeshComponent/Source/ProceduralMeshComponent/Public/ProceduralMeshComponent.h

USTRUCT()
struct FProcMeshSection
{
public:
    UPROPERTY() TArray<FProcMeshVertex> ProcVertexBuffer;  // 0x0000, size 0x10
    UPROPERTY() TArray<uint32> ProcIndexBuffer;  // 0x0010, size 0x10
    UPROPERTY() FBox SectionLocalBox;  // 0x0020, size 0x1C
    UPROPERTY() bool bEnableCollision;  // 0x003C, size 0x1
    UPROPERTY() bool bSectionVisible;  // 0x003D, size 0x1
};
