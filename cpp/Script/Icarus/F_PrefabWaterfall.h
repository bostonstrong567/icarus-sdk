// /Script/Icarus.PrefabWaterfall
// size 0x80, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabWaterfall
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Width;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Height;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Curve;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MeshType;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseCalmVariant;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsInCave;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsLava;  // 0x0042, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaterfallDetails WaterfallDetails;  // 0x0044, size 0x3C
};
