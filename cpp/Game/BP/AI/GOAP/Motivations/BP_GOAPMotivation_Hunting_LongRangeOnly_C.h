// /Game/BP/AI/GOAP/Motivations/BP_GOAPMotivation_Hunting_LongRangeOnly.BP_GOAPMotivation_Hunting_LongRangeOnly_C
// Derives from: UBP_GOAPMotivation_Hunting_C > UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x78, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_GOAPMotivation_Hunting_LongRangeOnly_C : public UBP_GOAPMotivation_Hunting_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0070, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_GOAPMotivation_Hunting_LongRangeOnly(int32 EntryPoint);  // parameters 0x4
};
