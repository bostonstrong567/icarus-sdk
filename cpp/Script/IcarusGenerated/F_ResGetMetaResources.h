// /Script/IcarusGenerated.ResGetMetaResources
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetMetaResources.h

USTRUCT()
struct FResGetMetaResources
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> MetaResources;  // 0x0008, size 0x10
};
