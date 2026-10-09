// /Script/Icarus.WeatherVisualData
// size 0x6C, declared in Icarus/Source/Icarus/Systems/Weather/WeatherManagerComponent.h

USTRUCT()
struct FWeatherVisualData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Rain;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sand;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Snow;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Cloudy;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Thunder;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SnowStorm;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WindSpeed;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WindStrength;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WindGust;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Debris;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FogDensity;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FogExtinction;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Ash;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Embers;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Smoke;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AcidRain;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Hail;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radiation;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightningCloud;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadiationWind;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speckles;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor FogColor;  // 0x0054, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FogColorAmount;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WhiteoutAmount;  // 0x0068, size 0x4
};
