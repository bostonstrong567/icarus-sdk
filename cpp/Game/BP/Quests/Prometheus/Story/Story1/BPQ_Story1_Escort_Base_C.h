// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_Story1_Escort_Base.BPQ_Story1_Escort_Base_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Story1_Escort_Base_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FoundBaseDaisyDied;  // 0x0490, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_Story1_Escort_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Overlap();
};
