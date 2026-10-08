// /Script/Icarus.ViewTraceParams
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusPlayerController.generated.h

USTRUCT()
struct FViewTraceParams
{
    UPROPERTY(BlueprintReadWrite) TArray<AActor*> IgnoredActors;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<UPrimitiveComponent*> IgnoredComponents;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadWrite) bool bTraceComplex;  // 0x0020, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bReturnPhysicalMaterial;  // 0x0021, size 0x1
    UPROPERTY(BlueprintReadWrite) float TraceDistance;  // 0x0024, size 0x4
    UPROPERTY(BlueprintReadWrite) FName DebugTraceFlag;  // 0x0028, size 0x8
};
