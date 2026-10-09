// /Script/Icarus.WeatherTierIcon
// size 0x68, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/WeatherTierIconLibrary.generated.h

USTRUCT()
struct FWeatherTierIcon : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> TierIcon;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor BarColor;  // 0x0040, size 0x28
};
