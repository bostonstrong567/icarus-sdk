// /Script/Icarus.WorldTalentManager
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/Systems/WorldTalents/WorldTalentManager.h

UCLASS(Config=Engine)
class AWorldTalentManager : public AIcarusActor, public ITalentHandler
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FBackendTalent> WorldTalents;  // 0x02C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnTalentsChanged OnWorldTalentsChanged;  // 0x02D8, size 0x10
    UPROPERTY(Instanced, BlueprintReadOnly) UGreatHuntTalentControllerComponent* GreatHuntTalentControllerComponent;  // 0x02E8, size 0x8

    UFUNCTION(BlueprintCallable) bool GetWorldTalent(FTalentsRowHandle& Talent);  // parameters 0x19
    UFUNCTION() void OnRep_WorldTalents();
    UFUNCTION(BlueprintCallable) bool UpdateGreatHuntTalent(const FTalentsRowHandle& Talent, bool bState);  // parameters 0x1A
};
