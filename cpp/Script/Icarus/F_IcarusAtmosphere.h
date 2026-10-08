// /Script/Icarus.IcarusAtmosphere
// size 0x148, declared in Icarus/Source/Icarus/Systems/Weather/IcarusAtmospheres.h

USTRUCT()
struct FIcarusAtmosphere : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AtmosphereName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image_Small;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image_Medium;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image_Large;  // 0x0080, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* FogColour;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* SunColour;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* RayleighScatteringColour;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SunIntensity;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* MoonIntensity;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SkyLightIntensity;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* OvercastScattering;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveVector* Bloom;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistFogScale;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MaterialParameterName;  // 0x00EC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTextureCube> Cubemap;  // 0x00F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> FishingBackground;  // 0x0120, size 0x28
};
