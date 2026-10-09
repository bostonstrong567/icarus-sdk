// /Script/Icarus.AllTalentsInTreeAccolade
// Derives from: UAccoladeImpl > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Accolades/AllTalentsInTreeAccolade.h

UCLASS()
class UAllTalentsInTreeAccolade : public UAccoladeImpl
{
public:
    UFUNCTION(BlueprintNativeEvent) void CalculateTalentTotals(UTalentModelInterface_Const* Model, const FTalentTreesRowHandle& TreeHandle, int32& Spent, int32& Total);  // parameters 0x28

    // Virtual functions that start here:
    //   CalculateTalentTotals_Implementation
};
