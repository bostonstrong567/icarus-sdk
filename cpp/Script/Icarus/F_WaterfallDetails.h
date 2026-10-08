// /Script/Icarus.WaterfallDetails
// size 0x3C, declared in Icarus/Source/Icarus/World/WaterfallDetails.h

USTRUCT()
struct FWaterfallDetails
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor WaterfallColor;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RVTTopBlend;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FarDistanceBlend;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearWaterMistIntensity;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearPatternX;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearPatternY;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearFallsSpeed;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FarWaterMistIntensity;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FarPatternX;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FarPatternY;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FarFallsSpeed;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DisplacementMultiplier;  // 0x0038, size 0x4
};
