// /Script/Icarus.IcarusBiome
// size 0x98, declared in Icarus/Source/Icarus/Systems/Weather/IcarusBiomes.h

USTRUCT()
struct FIcarusBiome : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BiomeName;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* BiomeTemperatureCurve;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WeatherFrequency;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresRowHandle AtmosphereType;  // 0x004C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomeAudioDataRowHandle Audio;  // 0x0064, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOrbitalCommunicationBlocked;  // 0x007C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle BiomeModifier;  // 0x0080, size 0x18
};
