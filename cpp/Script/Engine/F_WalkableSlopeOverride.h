// /Script/Engine.WalkableSlopeOverride
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FWalkableSlopeOverride
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EWalkableSlopeBehavior> WalkableSlopeBehavior;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WalkableSlopeAngle;  // 0x0004, size 0x4

    // Not reflected:
    float CachedSlopeAngle;  // 0x0008
    float CachedSlopeCos;  // 0x000C
};
