// /Script/CustomMeshComponent.CustomMeshTriangle
// size 0x24, declared in Engine/Plugins/Runtime/CustomMeshComponent/Source/CustomMeshComponent/Classes/CustomMeshComponent.h

USTRUCT()
struct FCustomMeshTriangle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vertex0;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vertex1;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vertex2;  // 0x0018, size 0xC
};
