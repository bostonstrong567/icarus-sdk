// /Script/Icarus.IcarusWeatherBiomeGroup
// size 0x28, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherBiomeGroup.h

USTRUCT()
struct FIcarusWeatherBiomeGroup : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBiomesRowHandle> AvaliableBiomes;  // 0x0018, size 0x10
};
