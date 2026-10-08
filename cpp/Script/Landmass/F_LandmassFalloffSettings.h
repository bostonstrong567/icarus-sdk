// /Script/Landmass.LandmassFalloffSettings
// size 0x14, declared in Engine/Plugins/Experimental/Landmass/Source/Runtime/Public/FalloffSettings.h

USTRUCT()
struct FLandmassFalloffSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBrushFalloffMode FalloffMode;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FalloffAngle;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FalloffWidth;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeOffset;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZOffset;  // 0x0010, size 0x4
};
