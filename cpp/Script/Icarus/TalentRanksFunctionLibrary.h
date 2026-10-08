// /Script/Icarus.TalentRanksFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Talents/Model/Data/TalentRanks.h

UCLASS()
class UTalentRanksFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FTalentRanksRowHandle FindRequiredTalentRank(FTalentsRowHandle Talent);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FTalentRank GetTalentRank(FTalentRanksRowHandle Reference, int32 Investment, EValid& Paths);  // parameters 0x98
};
