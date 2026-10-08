// /Script/Icarus.TalentModelDataStatics
// Derives from: UObject
// size 0x28, declared in Icarus/Source/Icarus/Talents/Model/Data/TalentModelData.h

UCLASS()
class UTalentModelDataStatics : public UObject
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTalentModelData(const FTalentModelData& ModelData, int32& Rank, int32& MaxRank, ETalentState& State);  // parameters 0x19
};
