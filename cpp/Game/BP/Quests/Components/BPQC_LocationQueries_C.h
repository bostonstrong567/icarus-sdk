// /Game/BP/Quests/Components/BPQC_LocationQueries.BPQC_LocationQueries_C
// Derives from: UBPQC_AnimalSwarm_C > UActorComponent > UObject
// size 0x1D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_LocationQueries_C : public UBPQC_AnimalSwarm_C
{
public:
    UFUNCTION(BlueprintCallable) void GetAtmosphere(FAtmospheresRowHandle& Atmosphere);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetBiome(FBiomesRowHandle& Biome);  // parameters 0x18
};
