// /Script/Icarus.ViewTraceResult
// size 0x8C, declared in Icarus/Source/Icarus/Controllers/ViewTraceStructs.h

USTRUCT()
struct FViewTraceResult
{
    UPROPERTY(BlueprintReadWrite) FHitResult Hit;  // 0x0000, size 0x88
    UPROPERTY(BlueprintReadWrite) EViewTraceHitType Type;  // 0x0088, size 0x1
};
