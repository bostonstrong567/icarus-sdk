// /Script/Icarus.PrefabLavaFlowPoint
// size 0x50, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabLavaFlowPoint
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlowSpeed;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseToFlowing;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Dryness;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeNoise;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Scale;  // 0x0044, size 0x8
};
