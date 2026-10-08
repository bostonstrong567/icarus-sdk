// /Game/BP/Quests/Components/BPQC_WeightedAnimalSwarm.BPQC_WeightedAnimalSwarm_C
// Derives from: UBPQC_AdvancedAnimalSwarm_C > UActorComponent > UObject
// size 0x1B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_WeightedAnimalSwarm_C : public UBPQC_AdvancedAnimalSwarm_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAISetupRowHandle, int32> CreatureWeighting;  // 0x0160, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_Creature(FAISetupRowHandle& Creature);  // parameters 0x18, named "Get Creature"
    UFUNCTION(BlueprintCallable) void SetWeighting(TMap<FAISetupRowHandle, int32> CreatureWeighting);  // parameters 0x50
};
