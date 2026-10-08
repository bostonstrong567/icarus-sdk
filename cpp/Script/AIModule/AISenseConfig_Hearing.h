// /Script/AIModule.AISenseConfig_Hearing
// Derives from: UAISenseConfig > UObject
// size 0x60, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseConfig_Hearing.h

UCLASS(EditInlineNew, Config=Game)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) TSubclassOf<UAISense_Hearing> Implementation;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HearingRange;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LoSHearingRange;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseLoSHearing : 1;  // 0x0058, mask 0x01
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) FAISenseAffiliationFilter DetectionByAffiliation;  // 0x005C, size 0x4
};
