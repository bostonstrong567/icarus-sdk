// /Script/Icarus.SurvivalTriggers
// size 0xD0, declared in Icarus/Source/Icarus/IcarusGenerated/SurvivalTriggers/SurvivalTriggersRowHandle.h

USTRUCT()
struct FSurvivalTriggers : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierTrigger> Food;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierTrigger> Water;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierTrigger> Oxygen;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierTrigger> Radiation;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTemperatureTrigger Cold;  // 0x0058, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTemperatureTrigger Heat;  // 0x0088, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Weight;  // 0x00B8, size 0x18
};
